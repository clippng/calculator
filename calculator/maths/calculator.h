#include "number.c"

struct Calculator {
	Number* registers[10];
};
//need to add operation commands that alter original value instead of returning a new pointer
