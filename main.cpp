/*
*  Kaylynn Dungan
*  COMP 360
*  03/10/2020
*  Lexical analyzer and recursive descent parser
*/

#include <iostream>
#include <string>
#include "analyze.h"
#include "parse.h"

std::string input;

int main() {
    std::cout << "Configuring...\nReady to work! Please enter your program:" << std::endl;
    std::getline(std::cin, input);

    if (input.empty()){
        std::cout << "Not a valid input. Closing...";
        return 0;
    }
    else {
       std::string pass = replace(input); //makes string readable for analyze()
       parse(analyze(pass)); //send string to analyze, send to parser
    }
}

// test program 1: float test() { float m, n, p; m = n + m - p; p = m - n; } (valid)
// test program 2: float ques() { float x, y, z; x + y - z; } (invalid)