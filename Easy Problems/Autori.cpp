/**
 * @file Autori.cpp
 * @author Justin Lutz
 * @brief Kattis Solution Autori   
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>

int main()
{
       // declarations
    std::string initials = "";
    std::string freshString = "";
    int stringLength;
    
    // get input
    std::cin >> freshString;
    
    // assign stringLength
    stringLength = freshString.length();
    
    // loop to do work
    for(int i = 0; i < stringLength; i++)
    {
        if(isupper(freshString.at(i)))
        {
            initials += freshString.at(i);
        }
    }
    
    // print results
    std::cout << initials;
    
    // generic
    return 0;
}