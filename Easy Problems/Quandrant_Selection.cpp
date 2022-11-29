/**
 * @file Quandrant_Selection.cpp
 * @author Justin Lutz
 * @brief Determine which quadrant a set of values lie in. 
 * @version 0.1
 * @date 2022-11-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    // declare variables
    int x, y;

    // get input
    std::cin >> x >> y;

    //if statement for quadrant 1
    if(x > 0 && y > 0)
    {
        std::cout << "1";
    }

    // if statement for quadrant 2
     if(x < 0 && y > 0)
    {
        std::cout << "2";
    }

    // if statement for quadrant 3
     if(x < 0 && y < 0)
    {
        std::cout << "3";
    }

    // if statement for quadrant 4
     if(x > 0 && y < 0)
    {
        std::cout << "4";
    }
}