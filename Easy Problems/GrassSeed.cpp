/**
 * @file GrassSeed.cpp
 * @author Justin Lutz
 * @brief  Kattis Problem Grass Seeds. Solution in C++
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    // declare double variables
    double cost, length, width, total = 0;
    
    // declare int variables
    int lawns;
    
    // get inputs
    std::cin >> cost >> lawns;
    
    // for loop to do work
    for(int i = 0; i < lawns; i++)
    {
        // get length and width
        std::cin >> length >> width;
        
        // calculate total
        total += (cost * length * width);
    }
    
    // fixed output
    std::cout << std::fixed << std::setprecision(10) << total;
    
    return 0;
}