/**
 * @file Tarifa.cpp
 * @author Justin Lutz
 * @brief Kattis Problem Tarifa C++ Solution.
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    //declare variables
    int num1, num2, num3 = 0, num4;

    // get input
    std::cin >> num1 >> num2;

    // for loop
    for(int i = 0; i < num2; i++)
    {
        std::cin >> num4;
        num3 += (num1 - num4);
    }

    std::cout << num3 + num1;
}