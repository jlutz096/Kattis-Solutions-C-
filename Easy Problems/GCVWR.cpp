/**
 * @file GCVWR.cpp
 * @author Justin Lutz
 * @brief Kattis Solution GCVWR
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
     // declarations
    int G, T, n;
    int capacity, total, total2, lastTotal;
    
    //get inputs
    std::cin >> G >> T >> n;
    
    // calculate total towing capacity
    total = G - T; 
    
    // weight should not exceed 90% of the total.
    total2 = (total * .90);
    
    // loop declarations
    int q;
    int t= 0;
    for(int i = 0; i < n; i ++ )
    {
        std::cin >> q;
        
        t += q;
    }
    
    // final calculations
    lastTotal = total2 - t;
    
    // print weight of the trailer you should purchase
    std::cout << lastTotal;
    
    // generic statement
    return 0;
}