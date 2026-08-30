#include "Parser.h"
#include <vector>
#include <memory>
using namespace std;

class Parser {
	private:
		vector<Token> tokens;
	     size_t position;
		unordered_map<string, TokenType> varTable;


};