// Copyright (c) 2019 RJ Fromm All rights reserved.
//
// Created by: RJ Fromm
// Created on: November 2019
// This program shows functions
// with user input

#include <cstdlib>
#include <string>
#include <iostream>

void conversion() {
    // This program converts Celcius to Farenheit

    float temperatureCelcius;
    float temperatureFarenheit;


    std::cout << "Please enter a temperature in Celcius: ";
    std::cin >> temperatureCelcius;

    temperatureFarenheit = (9.0/5.0) * temperatureCelcius + 32;


    std::cout << temperatureCelcius << "° Celcius is " << temperatureFarenheit \
              << "° in Farenheit" << std::endl;
}

int main() {
    conversion();
}
