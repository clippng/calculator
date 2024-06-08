#include <stdbool.h>
#include <stdint.h>

typedef enum baseType Base;

typedef struct number Number;

Number* newNumber(int64_t value, Base base);
void deleteNumber(Number* number);


char* toBinaryString(int64_t value);
char* toOctalString(int64_t value);
char* toDecimalString(int64_t value);
char* toHexadecimalString(int64_t value);

// i =       42;
// i =     0x2a;
// i =      052;
// i = 0b101010;