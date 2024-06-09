#include "number.h"

#include <string.h>
#include <math.h>

Number stringToBinary(char *string) {
	int64_t value;
	for (int i = strlen(string), place = 0; i > 0; --i, ++place) {
		if (string[i] == '1') {
			value += pow((double)2, (double)place);
		}
	}
	Number number = { .empty = false, .base = BINARY, .value = value };
	return number;
}

Number stringToOctal(char *string) {
	int64_t value;
	for (int i = strlen(string), place = 0; i > 0; --i, ++place) {
		int num = string[i] - 48;
		value += num * pow((double)8, (double)place);
	}
	Number number = { .empty = false, .base = OCTAL, .value = value };
	return number;
}

Number stringToDecimal(char *string) {
	int64_t value;
	for (int i = strlen(string), place = 0; i > 0; --i, ++place) {
		int num = string[i] - 48;
		value += num * pow((double)10, (double)place);
	}
	Number number = { .empty = false, .base = DECIMAL, .value = value };
	return number;
}

Number stringToHexadecimal(char *string) {
	int64_t value;
	for (int i = strlen(string), place = 0; i > 0; --i, ++place) {
		int num;
		if (string[i] < 58) {
			num = string[i] - 48;
		} else {
			num = string[i] - 55;
		}
		value += num * pow((double)16, (double)place);
	}
	Number number = { .empty = false, .base = BINARY, .value = value };
	return number;
}

char* toString(Number *number) {
	switch (number->base) {
		case UNDEFINED:
			return "UNDEFINED_BASE";
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

char* toBinaryString(int64_t value) {
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

char* toOctalString(int64_t value) {
	char* string = "0o";

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

char* toDecimalString(int64_t value) {
	char* string = "";

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

char* toHexadecimalString(int64_t value) {
	char* string = "0x";

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