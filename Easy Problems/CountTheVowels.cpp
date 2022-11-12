/**
 * @file CountTheVowels.cpp
 * @author Justin Lutz
 * @brief Count the Vowels
 * 
 * Input: Takes a string s(1 <= |s| <= 80). The string s is guaranteed to have at least one
 * non-white space character.
 * 
 * Output: A single line with a single integer, which is the number of vowels in s.
 * 
 * @version 0.1
 * @date 2022-11-11  
 * 
 */

#include <iostream>
#include <string>

int main()
{
    // declare vowel count
    int vowels = 0;

    // get input
    std::string sentence = "";
    std::getline(std::cin, sentence);

    // loop to check and count vowels. We have to check both Upper and Lowercase. 
    // There will be chances to optimize this code in the future.
    for(int i = 0; i < sentence.length(); i++)
    {
     if((sentence[i] == ('a') || sentence[i] == ('e') || sentence[i] == ('i') ||
     sentence[i] == ('o') || sentence[i] == ('u') || sentence[i] == ('A') ||
     sentence[i] == ('E') || sentence[i] == ('I') || sentence[i] == ('O') ||
     sentence[i] == ('U')))
     {
        // keep count of vowels
        vowels += 1;
     }
    }
    std::cout << vowels << std::endl;
}