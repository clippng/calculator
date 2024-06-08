#include "interpretor.h"

Number* number;




void interpret(const TransferData* data) {
	number->value = data->initial_value;
	for (int i = 0; i < data->length; ++i) {
		executeCommand(data->operators[i], data->values[i]);
	}
}

void executeCommand(Operators operation, int64_t value) {
	// switch(operation) {
	// 	case ADD:

	// }
}