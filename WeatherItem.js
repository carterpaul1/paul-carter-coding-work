import React from 'react';

// Function to convert Celsius to Fahrenheit
const convertToFahrenheit = (celsius) => {
  return (celsius * 9/5) + 32;
};

const WeatherItem = ({ item, pollen }) => {
  const temperatureFahrenheit = convertToFahrenheit(item.main.temp);
  
  return (
    <tr>
      <td>{new Date(item.dt_txt).toLocaleString()}</td>
      <td>{temperatureFahrenheit}°F</td>
      <td>{item.weather[0].description}</td>
      <td>{pollen ? pollen.count : 'N/A'}</td>
      <td>{pollen ? pollen.type : 'N/A'}</td>
    </tr>
  );
};

export default WeatherItem;

