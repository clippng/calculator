#include "lexer.h"

#include <ctype.h>
#include <string.h>
#include <stdio.h>

#define NUMBER_SUBSTRING_LOOP(str, pos) while ((str[pos] > 47 && str[pos] < 58) || (str[pos] > 64 && str[pos] < 71)) { ++pos; }

void scanTokens(Lexer *scanner) {
	int current_string_index;
	int current_token_index;
	for (current_string_index = 0; current_string_index < strlen(scanner->source_string); ++current_string_index) {
		Token token;
		switch (scanner->source_string[current_string_index]) {
			case ' ': break;
			case '(': token.type = OPEN_BRACKET; break;
			case ')': token.type = CLOSE_BRACKET; break;
			case '+': token.type = PLUS; break;
			case '-': token.type = MINUS; break;
			case '*': token.type = MULTIPLY; break;
			case '/':  
				if (scanner->source_string[current_string_index + 1] == '/') {
					token.type = FLOOR_DIVISON;
					++current_string_index;
				} else {
					token.type = DIVIDE;
				}
				break;
			case '%': token.type = MODULUS; break;
			case '=': token.type = EQUALS; break;
			case '>': 
				if (scanner->source_string[current_string_index + 1] == '=') {
					token.type = GREATER_THAN_OR_EQUAL;
					++current_string_index;
				} else {
					token.type = GREATER_THAN; 
				}
				break;
			case '<': 
				if (scanner->source_string[current_string_index + 1] == '=') {
					token.type = LESS_THAN_OR_EQUAL;
					++current_string_index;
				} else {
					token.type = LESS_THAN; 
				}
				break;
			case '^': token.type = EXPONENT; break;
			case '$': token.type = ROOT; break;
			case '@': token.type = LOG; break;
			case '!': token.type = FACTORIAL; break;
			case '|': token.type = ABSOLOUTE_VALUE; break;

			case 'r': 
				if (scanner->source_string[current_string_index + 1] == 'o' &&
					scanner->source_string[current_token_index + 2] == 'o' &&
					scanner->source_string[current_string_index + 3] == 't') {
						token.type = ROOT;
						current_string_index +=3;
					} 
				break;
			default:
				if (isdigit(scanner->source_string[current_string_index])) {
					if (scanner->source_string[current_token_index] == '0') {
						if (scanner->source_string[current_string_index + 1] == 'b') {
							token.type = BASE_2;
							char* number_str;
							int j = current_string_index;
							NUMBER_SUBSTRING_LOOP(scanner->source_string, j)
								number_str += scanner->source_string[current_string_index + j];
							token.value = stringToBinary(number_str);
							current_string_index += current_string_index - j;
						} else if (scanner->source_string[current_string_index + 1] == 'o') {
							token.type = BASE_8;
							char* number_str;
							int j = current_string_index;
							NUMBER_SUBSTRING_LOOP(scanner->source_string, j)
								number_str += scanner->source_string[current_string_index + j];
							token.value = stringToOctal(number_str);
							current_string_index += current_string_index - j;
						} else if (scanner->source_string[current_string_index + 1] == 'x') {
							token.type = BASE_16;
							char* number_str;
							int j = current_string_index;
							NUMBER_SUBSTRING_LOOP(scanner->source_string, j)
								number_str += scanner->source_string[current_string_index + j];
							token.value = stringToHexadecimal(number_str);
							current_string_index += current_string_index - j;
						} else if (!isdigit(scanner->source_string[current_string_index + 1])){
							token.type = ZERO;
						} else {
							token.type = BASE_10;
							char* number_str;
							int j = current_string_index;
							NUMBER_SUBSTRING_LOOP(scanner->source_string, j)
								number_str += scanner->source_string[current_string_index + j];
							token.value = stringToDecimal(number_str);
							current_string_index += current_string_index - j;
						}
					}
				} else {
					perror(&scanner->source_string[current_string_index]);
				};

		}
		scanner->tokens[current_token_index] = token;
		++current_token_index;
	}
}


