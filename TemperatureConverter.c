function celsiusToFahrenheit(celsius) {
    return (celsius * 9/5) + 32;
}

function fahrenheitToCelsius(fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

const choice = prompt("Convert (1) Celsius to Fahrenheit or (2) Fahrenheit to Celsius:");
if (choice === '1') {
    const celsius = parseFloat(prompt("Enter Celsius:"));
    console.log(`Temperature in Fahrenheit: ${celsiusToFahrenheit(celsius)}°F`);
} else if (choice === '2') {
    const fahrenheit = parseFloat(prompt("Enter Fahrenheit:"));
    console.log(`Temperature in Celsius: ${fahrenheitToCelsius(fahrenheit)}°C`);
} else {
    console.log("Invalid choice.");
}
