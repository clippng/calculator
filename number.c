#include "number.h"
#include <stdlib.h>

#define CRITICAL_ERROR_INSUFFICIENT_MEMORY = 10;

Number* newNumber(__int64_t value, Base base) {
	Number *number = (Number*)malloc(sizeof(Number));
	if (number == NULL) {
		exit(1);
	}
	number-> value = value;
	number->base = base;
	
	return number;
}

void deleteNumber(Number* number) {
	// do some other stuff
	free(number);
}

char* toString(Number *number) {
	switch (number->base) {
		case BINARY:
			return toBinaryString(number->value);
		case OCTAL:
			return toOctalString(number->value);
		case DECIMAL:
			return toDecimalString(number->value);
		case HEXADECIMAL:
			return toHexadecimalString(number->value);
	}
}

char* toBinaryString(__int64_t value) {
	char* string = "0b";

	while (value > 0b0) {
		value = value >> 1;
		if (value & 0b1) {
			string += '1';
		} else {
			string += '0';
		}
	}
	return string;
}

char* toOctalString(__int64_t value) {
	char* string = "0b";

	while (value > 0b0) {
		value = value >> 1;
		if (value & 0b1) {
			string += '1';
		} else {
			string += '0';
		}
	}
	return string;
}

char* toDecimalString(__int64_t value) {
	char* string = "0b";

	while (value > 0b0) {
		value = value >> 1;
		if (value & 0b1) {
			string += '1';
		} else {
			string += '0';
		}
	}
	return string;
}

char* toHexadecimalString(__int64_t value) {
	char* string = "0b";

	while (value > 0b0) {
		value = value >> 1;
		if (value & 0b1) {
			string += '1';
		} else {
			string += '0';
		}
	}
	return string;
}