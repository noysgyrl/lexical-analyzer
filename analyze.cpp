#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include "analyze.h"
#include "parse.h"
#include <vector>

std::vector<std::string> lexemes;

 std::string replace(std::string input){

    size_t where = input.find(";"); //separate semicolons
    while (where != std::string::npos){
        input.replace(where, 1, " ; ");
        where = input.find(";", where + 3);
    }
    size_t place = input.find(","); //separate commas
    while (place != std::string::npos){
        input.replace(place, 1, " , ");
        place = input.find(",", place + 3);
    }
    size_t p1 = input.find("("); //separate parentheses
    while (p1 != std::string::npos){
        input.replace(p1, 1, " ( ");
        p1 = input.find("(", p1 + 3);
    }
    size_t p2 = input.find(")"); //separate parentheses
    while (p2 != std::string::npos){
        input.replace(p2, 1, " ) ");
        p2 = input.find(")", p2 + 3);
    }
    return input;
}

std::vector<std::string> analyze(std::string str) {
    std::string list;
    std::stringstream in(str);

    do { //assigns each lexeme with a type
        std::string type;
        std::string lexeme;
        in >> lexeme;

        if (lexeme == "+" || lexeme == "-" || lexeme == "*" || lexeme == "/" || lexeme == "%") {
            type = "operator";
        } else if (lexeme == "=") {
            type = "assignment";
        } else if (lexeme == "float") {
            type = "keyword";
        } else if (lexeme == "(") {
            type = "left parentheses";
        } else if (lexeme == ")") {
            type = "right parentheses";
        } else if (lexeme == "{") {
            type = "left brace";
        } else if (lexeme == "}") {
            type = "right brace";
        } else if (lexeme == ",") {
            type = "comma";
        } else if (lexeme == ";") {
            type = "semicolon";
        }
        //if it is not one of the previous options we assign it identifier
        else {
            type = "identifier";
        }

        std::cout << lexeme + " <" + type + ">\n";

        std::string vectorObject = lexeme + " <" + type + ">";
        lexemes.push_back(vectorObject);//add to vector
    } while (in);

    return lexemes;
}