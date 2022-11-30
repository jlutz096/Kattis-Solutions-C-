/**
 * @file Oddities.cpp
 * @author Justin Lutz
 * @brief Kattis Problem Oddities. C++ Solution.
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main(){
    
    // declare variables
    int N, nums;
    
    // get total amount of numbers
    std::cin >> N;
    
    // for loop work
    for(int i = 0; i < N; i++)
    {
        std:: cin >> nums;
        if(abs(nums) % 2 == 0)
        {
            std::cout << nums << " is even\n";
        }
        else
        {
            std::cout << nums << " is odd\n";
        }
    }
    return 0;

}