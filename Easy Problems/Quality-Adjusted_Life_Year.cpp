/**
 * @file Quality-Adjusted_Life_Year.cpp
 * @author Justin Lutz 
 * @brief The first line of input contains a single integer N ( 1 <= N <= 100), which is the number of periods.
 * The next line N describes the periods of life, two integers, q and y. 
 * @version 0.1
 * @date 2022-11-28
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

    // variable declaration for loop processing.
    double q, y, t = 0;
    
    // loop work
    for(int i = 0; i < n; i++)
    {
        std::cin >> q >> y;

        t += q * y;
    }

    // print results total
    std::cout << t << std::endl;
}