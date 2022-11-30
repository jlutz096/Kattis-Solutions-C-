/**
 * @file SortTwoNumbers.cpp
 * @author Justin Lutz
 * @brief Sort Two Numbers
 * 
 * Input: Te input contains one line, which has two integers a and b, separated by a
 * single space. The bounds on these values are 0 <= a, b <= 1,000,000.
 * 
 * Output: The smaller number first, and the larger number second.
 * 
 * @version 0.1
 * @date 2022-11-11
 * 
 */

#include <iostream>
#include <algorithm>

int main()
{
    // declare variables
    int a, b;

    // get input
    std::cin >> a >> b;

    // check and print results. this uses the algorithm library.
    std::cout << std::min(a, b) << " " << std::max(a, b) << std::endl;

     return 0;

}