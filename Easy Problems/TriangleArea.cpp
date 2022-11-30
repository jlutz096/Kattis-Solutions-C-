/**
 * @file TriangleArea.cpp
 * @author Justin Lutz
 * @brief  Triangle Area
 * 
 * Input: Consists of a single line with two integers 1 <= h <= 1000 and
 * 1 <= b <= 1000, the height and base of the triangle.
 * 
 * Output: A single number, the area of the triangle. Your answer must be correct within
 * an absolute or relative error of 10^-7.
 * 
 * @version 0.1
 * @date 2022-11-11
 * 
 */
#include <iostream>

int main()
{
    // declare variables
    float height, base;

    // get input
    std::cin >> height >> base;

    // declare area variable
    float area;

    // calculate the error
    area = (height * base) / 2;

    // print results
    std::cout << area;

    return 0;
}