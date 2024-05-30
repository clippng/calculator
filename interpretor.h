#include <stdint.h>

#include "number.h"

enum OPERATORS {
	ADD,
	SUBTRACT,
	MULTIPLY,
	DIVIDE
};
typedef enum OPERATORS Operators;	

struct TRANSFER_DATA { // python should send data through this struct
	int64_t initial_value;
	const unsigned int length;
	Operators operators[10];
	int64_t values[10];
};
typedef struct TRANSFER_DATA TransferData ;

void interpret(const TransferData* data);

void executeCommand(Operators operation, int64_t value);
