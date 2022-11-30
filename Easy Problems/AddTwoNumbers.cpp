/**
 * @file AddTwoNumbers.cpp
 * @author Justin Lutz
 * @brief Add Two Numbers
 * 
 * Input: Contains one line, which has two integers a and b, separated by a single
 * space. The bounds on these values are 0 <= a, b <= 1,000,000.
 * 
 * Output: The sum of the two integers, a + b.
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

    // output results
    std::cout << sum << std::endl;

    return 0;

}