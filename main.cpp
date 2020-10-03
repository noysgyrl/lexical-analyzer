/*
*  Kaylynn Dungan
*  COMP 360
*  03/10/2020
*  Lexical analyzer and recursive descent parser
*/

#include <iostream>
#include <string>
#include "analyze.h"

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
       std::cout << analyze(pass); //send string to analyze (returns list of lexemes with types)
    }
    //send to parser (checks syntax)
    //parser uses recursive descent parsing to implement syntax analysis
        //if test program is valid, std::cout < “The sample program is correct”
        //else show an error (and possibly how to fix it?)
}

// test program 1: float test() { float m, n, p; m = n + m - p; p = m - n; } (valid)