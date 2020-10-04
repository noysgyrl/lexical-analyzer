#include <iostream>

std::string parse(std::vector <std::string> lexemes); //returns validity of code
void isDeclare(std::vector<std::string> lexemes); //checks declaration statement
void isStmt(std::vector<std::string> lexemes); //checks statements
void isAssign(std::vector<std::string> lexemes); //checks assignment statements
void isExpr(std::vector<std::string> lexemes); //checks expression statements