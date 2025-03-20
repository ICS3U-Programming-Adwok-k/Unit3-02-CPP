// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: March 19th, 2025
// This program asks you to guess the
// correct number.

#include <iostream>

int main() {
    // This is the correct number
    const int CORRECT_NUMBER = 7;
    int guessedNumber;

    // Guess the correct number
    std::cout << "Guess the correct number: ";
    std::cin >> guessedNumber;
    std::cout<< "" << std::endl;

    // if you guess the correct number
    // it will tell you, you guessed correctly
    if (guessedNumber == CORRECT_NUMBER) {
         std::cout << "You guessed correctly!" <<std::endl;
    }
    // If you guess the wrong number
    // it will tell you, you guessed wrong.
    if (guessedNumber != CORRECT_NUMBER) {
         std::cout << "You guessed wrong.";
    }
}
