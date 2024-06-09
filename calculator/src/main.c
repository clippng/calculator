#include "lexer.h"

#include <stdio.h>

int main() {
	Lexer lexer = {};
	lexer.source_string = "1+1";
	scanTokens(&lexer);

	for (int i = 0; i < sizeof(lexer.tokens) / sizeof(Token); ++i) {
		printf("%d", lexer.tokens[i].type);
	}

	return 0;
}