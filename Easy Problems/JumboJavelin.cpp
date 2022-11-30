/**
 * @file JumboJavelin.cpp
 * @author Justin Lutz
 * @brief Kattis Problem Easy: Jumbo Javelin
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    // variable declaration
    int N,n;

    // get number of steel rods
    std::cin >> N;

    int length = 0;

    // for loop
    for(int i = 0; i < N; i++)
    {
        // get lengths
        std::cin >> n;

        //get total length
        length += n;
    }

    // print results
    std::cout << length - N + 1;
}