#include <string>

enum Base {
	BINARY = 2,
	OCTAL = 8,
	DECIMAL = 10,
	HEXADECIMAL = 16
};

struct Value {
	Base base;
	bool sign;
	uint exponent; // must be less than base
	uint precision;
	uint range_max; //min = 1-max
	uint range_min;
};

struct Number {
	Value value;
	std::string name;

	Value getValue() { return value; }

};


struct BinaryNumber : Number {
	BinaryNumber(Value value) {
		this->value = value;
	}

	~BinaryNumber() {

	};

	double getValue();

	std::string getName() {

	}

};

class OctalNumber : Number {

};

class DecimalNumber : Number {

};

class HexadecimalNumber : Number {

};