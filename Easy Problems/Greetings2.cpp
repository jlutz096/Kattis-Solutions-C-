/**
 * @file Greetings2.cpp
 * @author Justin Lutz
 * @brief Kattis Solution Greetings (2)
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
    std::string phrase;
    
    // get input
    std::cin >> phrase;
    
    // do work
    std::cout <<  "h" + std::string( 2 * (phrase.size()-2), 'e') + "y";

    return 0;
}