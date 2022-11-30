/**
 * @file R2.cpp
 * @author Justin Lutz
 * @brief Kattis R2 Solution C++
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

    // calculate num2
    num2 *= 2;

    // final num2 calculations
    std::cout << num2 - num1;

    return 0;
}