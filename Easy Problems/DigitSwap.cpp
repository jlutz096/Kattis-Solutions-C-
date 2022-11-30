/**
 * @file DigitSwap.cpp
 * @author Justin
 * @brief Kattis Solution Digit Swap
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
      // declarations
    int n, reversed = 0, remainder;
    
    // get input
    std::cin >> n;
    
    // loop to do work
    while(n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    // print reversed number.
    std::cout << reversed;
    
    return 0;
    
}