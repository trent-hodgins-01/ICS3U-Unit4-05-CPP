// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/05/2021
// This is an adding program
// The user enters in the number of numbers they would like to add
// The user then enters the numbers they would like to add

#include <iostream>

int main() {
    // this function does addition
    int loopCounter = 0;
    int answer = 0;
    std::string numberAsString;
    int numberOfNumbersInt;
    std::string numberOfNumbers;
    int numberAsInteger;

    // input
    std::cout << "How many numbers are you going to add: ";
    std::cin >> numberOfNumbers;

    // process and output
    try {
        // convert string to integer
        numberOfNumbersInt = std::stoi(numberOfNumbers);

        for (loopCounter = 0; loopCounter < numberOfNumbersInt; loopCounter++) {
            std::cout << "Enter a number to add: ";
            std::cin >> numberAsString;
            numberAsInteger = std::stoi(numberAsString);
            if (numberAsInteger < 0) {
                continue;
            } answer = answer + numberAsInteger;
        } std::cout << "Sum of the positive numbers is " << answer;
    }catch (std::invalid_argument) {
        std::cout << "You didn’t enter in a number" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
