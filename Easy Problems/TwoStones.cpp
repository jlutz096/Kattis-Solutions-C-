/**
 * @file TwoStones.cpp
 * @author Justin Lutz
 * @brief Kattis Problem Two Stones Solution C++
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <iostream>

int main()
{
    // declare variable
    int n;
    
    // get input
    std::cin >> n;
    
    // conditional statement for check
    (n % 2 == 1) ? std::cout << "Alice" : std::cout << "Bob";
}