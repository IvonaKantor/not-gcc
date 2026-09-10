#pragma once
#ifdef AST_H
#define AST_H

#include <vector>


struct ASTNode {
    enum Kind {
        NODE_FUNCTION,
        NODE_NUMBER
    };
};

#endif