#include "../src/lexer/Lexer.h"
#include "Parser.h"
#include <iostream>
#include <fstream>
#include <memory>
#include <string>

using namespace std;

struct Compiler {
    string source;
    vector<Token> tokens;
    string error;
};

extern "C" {
Compiler *compiler_create(void) {
    return new Compiler();
}

void compiler_destroy(Compiler *compiler) {
    delete compiler;
}
}
