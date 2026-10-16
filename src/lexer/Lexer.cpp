#include "Lexer.h"
#include <cctype>
#include <unordered_map>
#include <iostream>

Lexer::Lexer(const std::string& src)
    : source(src), position(0), line(1) {}

bool Lexer::isAtEnd() const {
    return position >= source.length();
}