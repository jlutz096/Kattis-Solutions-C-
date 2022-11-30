/**
 * @file KnightPacking.cpp
 * @author Justin Lutz
 * @brief NxN chess board. First player or second player that wins?
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

    //use conditional operator
    (n % 2 == 1) ? std::cout << "first" : std::cout << "second";

    return 0;

}