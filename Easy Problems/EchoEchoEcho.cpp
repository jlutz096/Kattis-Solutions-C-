/**
 * @file EchoEchoEcho.cpp
 * @author Justin Lutz
 * @brief Echo Echo Echo 
 * 
 * Input: Input a single line, containing exactly one word. The only characters used 
 * are upper and lower case letters(a-z). The world contains atleast one and at most 15
 * characters.
 * 
 * Output: Output the given word three times, separated by spaces.
 * 
 * @version 0.1
 * @date 2022-11-11
 * 
 */
#include <iostream>

int main()
{
    // declare string
    std::string word;

    // get input
    std::cin >> word;

    // print result
    std::cout << word + " " + word + " " + word << std::endl;

    return 0;
}
