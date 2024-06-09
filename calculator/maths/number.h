#include <stdbool.h>
#include <stdint.h>

typedef enum baseType {
	UNDEFINED = 0,
	BINARY = 2,
	OCTAL = 8,
	DECIMAL = 10,
	HEXADECIMAL = 16
} Base;

typedef struct number {
	bool empty;
	Base base;
	int64_t value;
} Number;

Number stringToBinary(char *string);
Number stringToOctal(char *string);
Number stringToDecimal(char *string);
Number stringToHexadecimal(char *string);

char* toBinaryString(int64_t value);
char* toOctalString(int64_t value);
char* toDecimalString(int64_t value);
char* toHexadecimalString(int64_t value);

// i =       42;
// i =     0x2a;
// i =      052;
// i = 0b101010;