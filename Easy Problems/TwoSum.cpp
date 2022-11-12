/**
 * @file TwoSum.cpp
 * @author Justin Lutz
 * @brief Two Sum
 * 
 * Input: Consists of a single line with two integers 0 <= a <= 1000 and
 * 0 <= b < = 1000.
 * 
 * Output: A single integer, the sum a + b.
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

    // declare sum variable
    int sum;

    // calculate sum
    sum = a + b;

    // print results
    std::cout << sum << std::endl;
}