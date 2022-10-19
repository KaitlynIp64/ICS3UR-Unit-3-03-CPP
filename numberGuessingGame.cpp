// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program is a random number guessing game

#include <iostream>
#include <random>

int main() {
    // this function generates a random number
    int userGuess;
    int randomVariable;

    std::random_device rseed;
    std::mt19937 rgen(rseed());                      // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);  // [0,100]
    randomVariable = idist(rgen);

    // input
    std::cout << "This program is a guessing game." << std::endl;
    std::cout << "Guess a number between 0-100: ";
    std::cin >> userGuess;

    // process
    if (userGuess == randomVariable) {
        // output
        std::cout << "You guessed the correct number!";
    } else {
        // output
        std::cout << "You guessed the wrong number!";
        std::cout << "The correct number was " << randomVariable << ".";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
