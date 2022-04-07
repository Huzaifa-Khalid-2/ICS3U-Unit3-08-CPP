// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: April 2022
// This function checks if the year inserted by user
// is a leap year

#include <iostream>
#include <string>


int main() {
    // This function checks if the year inserted by user
    // is a leap year
    int userNumber;
    std::string userInput;

    // input
    std::cout << "Enter the year (integer): ";
    std::cin >> userInput;

    // process and output
    try {
        userNumber = std::stoi(userInput);
        if (userNumber % 4 == 0) {
            if (userNumber % 100 == 0) {
                if (userNumber % 400 == 0) {
                    std::cout << "It is a leap year";
                } else {
                    std::cout << "It is not a leap year";
                }
            } else {
                std::cout << "\n" << " It is a leap year"
                            <<std::endl;
            }
        } else {
            std::cout << "\n" << "It is not a leap year"
                            <<std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << userInput << "Really? (-_-)ゞ゛pick a year pls";
        std::cout <<""<< std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
