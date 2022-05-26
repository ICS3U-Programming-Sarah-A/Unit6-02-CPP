// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 26th, 2022
// This program generates a 10 random number between 0 and 100. It then uses a
// loop to display what position the random number is at & displays the max
// value of the numbers generated.
#include <iostream>
#include <array>
#include <random>
#include <ctime>

// declare constants
const int MAX_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// this function checks to see the largest item in the array
int findMaxValue(std::array<int, MAX_SIZE > numRandom) {
    int counter, max;
    max = numRandom[0];

    for (counter = 0; counter < MAX_SIZE; counter++) {
        if (max < numRandom[counter]) {
            max = numRandom[counter];
        }
    }
    return max;
}


int main() {
    // initialize counter
    int counter = 0;

    // declare variable
    std::array<int, MAX_SIZE > randomNum;
    int maxValue;

    // generates a random number
    srand(time(NULL));

    // determine the random number generated then displays it to the user.
    for (counter = 0; counter < MAX_SIZE; counter++) {
        int randomNumber = (rand() % (MIN_NUM, MIN_NUM + MAX_NUM));

        randomNum[counter] = randomNumber;
        std::cout << randomNum[counter];
        std::cout << " is added to the list at position " << counter;
        std::cout << std::endl;
    }

    // calls function & display the max value
    maxValue = findMaxValue(randomNum);
    std::cout << std::endl;
    std::cout << "The max value is: " << maxValue;
}
