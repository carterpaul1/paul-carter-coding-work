import React, { useState, useEffect } from 'react';
import axios from 'axios';
import WeatherForecast from './WeatherForecast';
import './WeatherForm.css'; 

const apiKey = '73d4e3622b358090e5235cc0e0affca9';

const fetchData = async (zipCode, setForecast, setPollenData, setError, setPollenError) => {
  try {
    const forecastResponse = await axios.get(`https://api.openweathermap.org/data/2.5/forecast`, {
      params: {
        zip: zipCode,
        appid: apiKey,
        units: 'metric',
      },
    });
    setForecast(forecastResponse.data);
    setError(null);
  } catch (err) {
    setError('Failed to fetch weather data. Please check the ZIP code and try again.');
    setForecast(null);
  }

  try {
    const pollenResponse = await axios.get(`https://api.example.com/pollen_data`, {
      params: {
        zip: zipCode,
      },
    });
    setPollenData(parsePollenData(pollenResponse.data));
    setPollenError(null);
  } catch (err) {
    setPollenError('Failed to fetch pollen data.');
    setPollenData(null);
  }
};

const parsePollenData = (data) => {
  // Parse data as needed
  return data;
};

const WeatherForm = () => {
  const [zipCode, setZipCode] = useState('');
  const [forecast, setForecast] = useState(null);
  const [pollenData, setPollenData] = useState(null);
  const [error, setError] = useState(null);
  const [pollenError, setPollenError] = useState(null);

  useEffect(() => {
    if (zipCode) {
      fetchData(zipCode, setForecast, setPollenData, setError, setPollenError);
    }
  }, [zipCode]); 

  const handleSubmit = (e) => {
    e.preventDefault();
    if (zipCode) {
      fetchData(zipCode, setForecast, setPollenData, setError, setPollenError); // Call fetchData function
    }
  };

  return (
    <div>
      <form onSubmit={handleSubmit}>
        <input
          type="text"
          placeholder="Enter ZIP code"
          value={zipCode}
          onChange={(e) => setZipCode(e.target.value)}
          className="input" 
        />
        <button type="submit" className="button">Get Weather Forecast</button>
      </form>
      {error && <p>{error}</p>}
      {pollenError && <p>{pollenError}</p>}
      {forecast && <WeatherForecast forecast={forecast} pollenData={pollenData} />}
    </div>
  );
};

export default WeatherForm;

