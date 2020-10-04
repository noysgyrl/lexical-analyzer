#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include "analyze.h"

//NOTE: this code does not work. It is incomplete (works up to declarident statements)
// and also randomly has an exit code -1073741819 (0xC0000005).
// I apologize. I will figure it out in a less messy way.

void isExpr(std::vector<std::string> lexemes){

}

void isAssign(std::vector<std::string> lexemes){

}

void isStmt(std::vector<std::string> lexemes){

}

void isDeclare(std::vector<std::string> lexemes){
    if (lexemes[5].find("<keyword>") != 0){
        if (lexemes[7].find("<identifier>") != 0){
            std::cout << "congratulations you made it to here";
        } else {std::cout << "Sample problem is incorrect. Declaration is incorrect.";}
    } else {std::cout << "Sample problem is incorrect. Declaration is incorrect.";}
}

std::string parse(std::vector<std::string> lexemes){ //uses recursive descent parsing to implement syntax analysis
    //if test program is valid, std::cout << “The sample program is correct”
    //else show an error (and possibly how to fix it?)

    std::string start = lexemes[0];
    if (start.find("<keyword>") != 0 || !lexemes.empty()){ //header testing
        if (lexemes[1].find("<identifier>") != 0 || lexemes.size() != 1){
            //if (lexemes[2].find("(") != 0 && lexemes[3].find(")") != 0 && lexemes[4].find("{") =! 0){
             //   isDeclare(lexemes);
           // } else {return "Sample problem is incorrect. Input should contain () {";}
        } else {return "Sample problem is incorrect. Function name is invalid.";}
    } else {return "Sample program is incorrect. Input should start with a keyword \"float\"";}

}

