#include "calculator.h"

Number* add(const int64_t value_one, const int64_t value_two, const Base base) {
	int64_t value = value_one + value_two;
	Number* number = newNumber(value, base);
	
	return number;
}

Number* subtract(const int64_t value_one, const int64_t value_two, const Base base) {
	int64_t value = value_one - value_two;
	Number* number = newNumber(value, base);
	
	return number;
}

Number* multiply(const int64_t value_one, const int64_t value_two, const Base base) {
	int64_t value = value_one * value_two;
	Number* number = newNumber(value, base);
	
	return number;
}

Number* divide(const int64_t value_one, const int64_t value_two, const Base base) {
	int64_t value = value_one / value_two;
	Number* number = newNumber(value, base);
	
	return number;
}