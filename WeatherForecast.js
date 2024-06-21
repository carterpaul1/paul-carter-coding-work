import React from 'react';
import WeatherItem from './WeatherItem';

const WeatherForecast = ({ forecast, pollenData }) => {
  // Organize forecast data by day
  const organizedForecast = {};
  forecast.list.forEach(item => {
    const date = item.dt_txt.split(' ')[0]; // Extract date from dt_txt
    if (!organizedForecast[date]) {
      organizedForecast[date] = [];
    }
    organizedForecast[date].push(item);
  });

  // Render a table for each day
  return (
    <div>
      {Object.keys(organizedForecast).map(date => (
        <div key={date}>
          <h2>{new Date(date).toLocaleDateString()}</h2>
          <table border="1" cellPadding="10" cellSpacing="0">
            <thead>
              <tr>
                <th>Date and Time</th>
                <th>Temperature (°C)</th>
                <th>Weather Description</th>
              </tr>
            </thead>
            <tbody>
              {organizedForecast[date].map((item, index) => (
                <WeatherItem key={index} item={item} />
              ))}
            </tbody>
          </table>

          {pollenData && (
            <div>
              <h2>Pollen Forecast</h2>
              <table border="1" cellPadding="10" cellSpacing="0">
                <thead>
                  <tr>
                    <th>Pollen Count</th>
                    <th>Pollen Type</th>
                  </tr>
                </thead>
                <tbody>
                  {pollenData[date] && pollenData[date].map((pollen, index) => (
                    <tr key={index}>
                      <td>{pollen.count}</td>
                      <td>{pollen.type}</td>
                    </tr>
                  ))}
                </tbody>
              </table>
            </div>
          )}
        </div>
      ))}
    </div>
  );
};

export default WeatherForecast;




