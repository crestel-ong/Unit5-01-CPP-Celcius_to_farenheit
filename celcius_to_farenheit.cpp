// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: Oct 2021
// This is the Celcius to fahrenheit converter
// This program uses defined  functions

#include <iostream>
#include <string>


// note: the style for the function name is following Google's style guide
//       https://google.github.io/styleguide/cppguide.html#Function_Names
void CalculateFahrenheit() {
    // calculate area
    // declaring
    std::string celsiusString;
    float fahrenheit;
    float celsiusFloat;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsiusString;

    // process and output
    try {
        // convert string to integer
        celsiusFloat = std::stof(celsiusString);

        // process
        fahrenheit = (9.0/5.0) * celsiusFloat + 32;

        // output
        std::cout << celsiusFloat << "°C is equal to " << fahrenheit
        << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << celsiusString << " is not an integer." << std::endl;
    }
    std::cout << "\nDone.";
}

int main() {
    CalculateFahrenheit();
}
