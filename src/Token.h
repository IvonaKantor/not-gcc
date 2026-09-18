#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
    TOKEN_RETURN,
    TOKEN_INT,
    TOKEN_SEMICOLON,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_LBRACE,
    TOKEN_RBRACE,
    TOKEN_EOF,
    TOKEN_ERROR
} TokenType;

typedef struct {
    TokenType type;
    char *lexeme;
    int line;
} Token;

#endif
