// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 18, 2022
// Number guessing program, this random numbers being generated.

#include <iostream>
#include <random>
#include <string>

int main() {
    // initializing variables
    int guessGenerated, guessAnswer;
    std::string userInputString;

    // Generating a number from 0-9
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    guessGenerated = idist(rgen);

    // Requesting the user's guess
    std::cout << "The secret number is within the range of 0-9 \n";
    std::cout << "Enter your guess: ";
    std::cin >> userInputString;
    std::cout << "\n"
              << std ::endl;

    // If the user guessed correctly:
    // try statement to check output string
    try {
        guessAnswer = std::stoi(userInputString);

        if (guessGenerated == guessAnswer) {
            std::cout << "You guessed correctly!";

        // process, check if the user's guess does
        //  not match the secret number
        } else {
            std::cout << "You guessed incorrectly. ";
            std::cout << guessAnswer << " was the correct number \n";
        }

    // Similar to an else statement...
    } catch (std::invalid_argument) {
        std::cout << userInputString <<
        " is not an integer. Please enter an integer";
    }
}

