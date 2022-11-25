// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Nov 24, 2022
// This program asks for a temperature
// in celsius and shows the user what
// it is converted into fahrenheit

#include <cmath>
#include <iostream>
#include <string>


// Fahrenheit function
void Fahrenheit() {
    // Initializing variables
    // Initializing fahTemp

    float fahTemp;
    // Initializing celTemp

    std::string celTemp;
    float celTempFloat;
    // Getting celTemp

    std::cout << "Enter a temperature: ";
    std::cin >> celTemp;
    try {
        celTempFloat = std::stof(celTemp);

        // Calculating fahTemp
        fahTemp = celTempFloat * (9 / 5) + 32;

        // Printing results
        std::cout << "\n";
        std::cout << "Your temperature in fahrenheit is ";
        std::cout << fahTemp;
        std::cout << ".";
    } catch (std::invalid_argument) {
        std::cout << "\n";
        std::cout << "Please enter a positive number.\n";
    }
}

int main() {
    // Introductory paragraph
    std::cout << "This program asks for a temperature\n";
    std::cout << "in celsius and shows the user what\n";
    std::cout << "it is converted into fahrenheit\n";
    std::cout << "\n";

    // Calling Fahrenheit()
    Fahrenheit();

    // Printing final message
    std::cout << "\n";
    std::cout << "Thanks for converting!";
    std::cout << "\n";
}
