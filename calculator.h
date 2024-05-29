#include "number.c"

struct Calculator {
	Number* registers[10];
};

Number* add(const int64_t value_one, const int64_t value_two, const Base base);

Number* subtract(const int64_t value_one, const int64_t value_two, const Base base);

Number* multiply(const int64_t value_one, const int64_t value_two, const Base base);

Number* divide(const int64_t value_one, const int64_t value_two, const Base base);

