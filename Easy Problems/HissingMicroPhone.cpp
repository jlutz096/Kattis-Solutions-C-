/**
 * @file HissingMicroPhone.cpp
 * @author Justin Lutz
 * @brief Kattis Problem Hissing Microphone. Solution in C++.
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    // declare string
    std::string hiss;
    
    // get string input
    std::cin >> hiss;
    
    // loop work
    for(int i = 0; i < hiss.length()-1; i++)
    {
        // if statement to check if element is s, and if element + 1 is also s,
        if(hiss.at(i) == 's' && hiss.at(i + 1) == 's')
        {
            // if true, print hiss and leave loop.
            std::cout << "hiss";
            
            // leave loop
            return 0;
        }
    }
    // if no sequential s is found, print 'no hiss'.
    std::cout << "no hiss";
    
   

    return 0;
}
