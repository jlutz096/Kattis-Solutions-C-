/**
 * @file NSum.cpp
 * @author Justin Lutz
 * @brief Kattis Solution N-Sum.
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    // declare variables
    int N, x, sum = 0;
    
    // get input
    std::cin >> N;
    
    // loop work
    for(int i = 0; i < N; i++)
    {
        std::cin >> x;
        sum += x;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
