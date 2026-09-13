#ifndef NOT_GCC_LEXER_H
#define NOT_GCC_LEXER_H

#include "Token.h"
#include <string>
#include <vector>
#include <optional>
using namespace std;

class Lexer {
private:
    string source;
    size_t position;
    int line;

public:
    explicit Lexer(const string &source);

    Token nextToken();

};


#endif
