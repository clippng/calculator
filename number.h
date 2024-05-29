#include <stdbool.h>
#include <stdint.h>

typedef enum BASE_ENUM {
	BINARY = 2,
	OCTAL = 8,
	DECIMAL = 10,
	HEXADECIMAL = 16
} Base;


struct NUMBER_TYPE {
	__int64_t value;
	Base base;
};
typedef struct NUMBER_TYPE Number;

Number* newNumber(__int64_t value, Base base);
void deleteNumber(Number* number);


char* toBinaryString(__int64_t value);
char* toOctalString(__int64_t value);
char* toDecimalString(__int64_t value);
char* toHexadecimalString(__int64_t value);

// i =       42;
// i =     0x2a;
// i =      052;
// i = 0b101010;