#include "number.h"

typedef enum {
	NONE,
	// operators
	OPEN_BRACKET,
	CLOSE_BRACKET,
	PLUS,
	MINUS,
	MULTIPLY,
	DIVIDE,
	FLOOR_DIVISON,
	MODULUS,
	EQUALS,
	GREATER_THAN,
	LESS_THAN,
	GREATER_THAN_OR_EQUAL,
	LESS_THAN_OR_EQUAL,
	EXPONENT,
	ROOT,
	LOG,
	FACTORIAL,
	ABSOLOUTE_VALUE,

	// values
	BASE_2,
	BASE_8,
	BASE_10,
	BASE_16,
	VARIABLE,
	COMPLEX,
	ZERO,

	// functions
	SIN,
	COS,
	TAN,

	// special tokens
	TERMINATED
} TokenType;

typedef struct {
	TokenType type;
	Number value;
} Token;

typedef struct {
	char* source_string;
	Token tokens[256];
} Lexer;

void scanTokens(Lexer *scanner);


