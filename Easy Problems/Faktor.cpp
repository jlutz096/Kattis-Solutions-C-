/**
 * @file Faktor.cpp
 * @author Justin Lutz
 * @brief Kattis Problem Faktor. Solution in C++.
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    // declare variables
    int num1, num2;
    
    // get input
    std::cin >> num1 >> num2;
    
    // calculations
    std::cout << (num1 * (num2 - 1) + 1);
    
    return 0;
}