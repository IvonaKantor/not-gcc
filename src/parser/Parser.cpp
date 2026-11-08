#include "Parser.h"
#include <vector>
#include <memory>
#include <unordered_map>
using namespace std;

class Parser {
    vector<Token> tokens;
    size_t position;
    unordered_map<string, TokenType> varTable;

public:
    explicit Parser(vector<Token> &tokens)
        : tokens(tokens), position(0) {
    }

    unique_ptr<ASTNode> parseProgram() {
        return praseFunction();
    }
};
