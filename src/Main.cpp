#include "Lexer.h"
#include "Parser.h"
#include <iostream>
#include <fstream>
#include <memory>
#include <string>

using namespace std;

struct Compiler {
    string source;
    vector <Token> tokens;
	string error;
};

extern Compiler compiler;