#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
    TOKEN_RETURN,
    TOKEN_INT,
    TOKEN_EOF,
    TOKEN_ERROR
} TokenType;

typedef struct {
    TokenType type;
    char *value;
    int line;
} Token;

#endif
