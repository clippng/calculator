#include "lexer.h"
#include "number.h"

#include <string.h>

enum tokenType {
	// operators
	OPEN_BRACKET,
	CLOSE_BRACKET,
	PLUS,
	MINUS,
	MULTIPLY,
	DIVIDE,
	EQUALS,
	GREATER_THAN,
	LESS_THAN,

	// values
	INTEGER_BASE_2,
	INTEGER_BASE_6,
	INTEGER_BASE_10,
	INTEGER_BASE_16,
	FLOAT_BASE_2,
	FLOAT_BASE_6,
	FLOAT_BASE_10,
	FLOAT_BASE_16,
	VARIABLE,
	COMPLEX,
	ZERO,

	// special tokens
	TERMINATED
};

struct token {
	TokenType type;
	Number value;
};

struct scanner {
	char* source_string;
	Token tokens[];
};

Token scanTokens(Scanner scanner) {
	// put all tokens in with spaces and then format later
	Token tokens[strlen(scanner.source_string)];
	int current;
	for (current = 0; current < strlen(scanner.source_string); ++current) {
		Token token;
		switch (scanner.source_string[current]) {
			case '(':
				token.type = OPEN_BRACKET;
				token.value = NULL;
			case ')':
				token.type = OPEN_BRACKET;
				token.value = NULL;

			case '0':
				switch (scanner.source_string[current + 1]) {
					case 'x':
						token.type = INTEGER_BASE_16;
				}
		}
	}


}

