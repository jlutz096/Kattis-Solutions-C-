/**
 * @file jackolanternjuxtaposition.cpp
 * @author Justin Lutz
 * @brief Input: The input consists of one line which contains three integers. The first, N, indicates
 * the number of eye designs. The second, T, indicates the number of nose designs. The third, M, 
 * indicates the number of mouth designs. All three values are in the range of [1,500].
 * 
 * Output: A single line containing te number of different possible Jack-O-Lantern designs.
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    // declare our three variabls, N, T, M
    int N, T, M;

    // get input
    std::cin >> N >> T >> M;

    // declare our totalVariations variable.
    int totalVariations;

    // calculate the totalVariations
    totalVariations = N * T * M;

    // output result
    std::cout << totalVariations << std::endl;
}
