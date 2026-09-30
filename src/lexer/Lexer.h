#ifndef NOT_GCC_LEXER_H
#define NOT_GCC_LEXER_H

#include "Token.h"
#include <string>
#include <vector>
using namespace std;

class Lexer {
private:
    string source;
    size_t position;
    int line;

    char peek() const;

    void skip_whitespace();

    bool isTheend() const;

public:
    explicit Lexer(const string &source);

    Token nextToken();

    vector<Token> tokenizeAll();
};

#endif
