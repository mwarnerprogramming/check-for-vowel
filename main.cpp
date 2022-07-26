/**
 * @file main.cpp
 * @author Michael Warner (michaelwarnerprogramming@gmail.com)
 * @brief This program utilizes a regex statement to check if user entry is a vowel or consenant.
 * @version 0.1
 * @date 2022-07-25
 */

#include <iostream>
#include <string>
#include <regex>

using std::cin;
using std::cout;
using std::regex;
using std::string;
using std::regex_match;

int main() {

    string userInput;
    regex checkForChars("[aeiouAEIOU]");

    cout << "Enter a character to see if it's a vowel or a consenant:\n";
    cin >> userInput;

    if( regex_match ( userInput, checkForChars ) ) { cout << "\nCharacter is a vowel."; }
    else { cout << "\nCharacter is a consenant."; }

    return 0;
}