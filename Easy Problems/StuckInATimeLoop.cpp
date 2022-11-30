/**
 * @file StuckInATimeLoop.cpp
 * @author Justin Lutz
 * @brief Stuck In a Time Loop problem from Kattis.
 * 
 * Input: Consists of a single integer N ( 1 <= N <= 100).
 * Output: Consists the integer 1..N plus the phrase "Abracadabra"
 * 
 * @version 0.1
 * @date 2022-11-11
 * 
 */

#include <iostream>

int main()
{
    // declare variables
    int N;

    // get input
    std::cin >> N;

    // use for loop to print result
    for(int i = 1; i <= N; i++)
    {
        std::cout << i << " " << "Abracadabra" << std::endl;
    }

    
    return 0;
}