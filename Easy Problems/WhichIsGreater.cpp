/**
 * @file WhichIsGreater.cpp
 * @author Justin Lutz
 * @brief Which is Greater?
 *
 * Input: The single line of input contains two positive integers, a and b (0 < a, b < 10^9).
 * 
 * Output: A single line with 1 if a > b, 0 otherwise.
 * 
 * @version 0.1
 * @date 2022-11-11
 * 
 */
#include <iostream>

int main()
{
    // declare variables
    int a, b;

    // get input
    std::cin >> a >> b;

    // conditional to check 
    int greater = (a > b) ? 1 : 0;
    
    // output result
    std::cout << greater;

    return 0;
}