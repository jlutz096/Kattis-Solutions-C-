/**
 * @file Betting.cpp
 * @author Justin Lutz
 * @brief Kattis Solution Betting
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
     float x, y;
     float ratio1, ratio2;
     
     // get input
     std::cin >> x;
     
     // calculate ratio 1
     ratio1 = 100 / x;
     
     // calculate ratio 2
     ratio2 = 100 / (100 - x);
     
     // print results
     std::cout << ratio1 << std::endl;
     std::cout << ratio2;
     
     // generic statement.
     return 0;
}