#include "number.c"

struct Calculator {
	Number* registers[10];
};
//need to add operation commands that alter original value instead of returning a new pointer

Number* add(const int64_t value_one, const int64_t value_two, const Base base);

Number* subtract(const int64_t value_one, const int64_t value_two, const Base base);

Number* multiply(const int64_t value_one, const int64_t value_two, const Base base);

Number* divide(const int64_t value_one, const int64_t value_two, const Base base);

