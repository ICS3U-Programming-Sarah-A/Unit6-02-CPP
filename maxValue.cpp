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

// declare constants
const int MAX_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// function upheraaa which I need to do 
int findMaxValue(std::array<int, MAX_SIZE)







int main() {
    // initalize counter
    int counter = 0;
    
    // declare variable
    std::array<int, MAX_ARRAY_SIZE > randomNum;
    int maxValue;
    
    // generates a random number
    srand(time(NULL));
    
    // determine the random number generated then displays it to the user.
    for (counter = 1; counter < MAX_SIZE; counter++) {
        if maxValue <
        int randomNumber = (rand() % (MIN_NUM, MIN_NUM + MAX_NUM));
        
        randomNum[counter] = randomNumber;
        std::cout << randomNum[counter];
        std::cout << " is added to the list at position " << counter;
        std::cout << std::endl;
    }

}