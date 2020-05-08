#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

#include "SimpleComputer.h"

int main() {

	cout << "SIMPLE CALCULATOR \n\n";
	cout << "Start calculations: \n";

	string input;	
	double operandOne;
	double operandTwo;
	int operation;
	double result = 0;
	int pos;

	while (true) {
		cout << "> ";
		getline(cin, input);

		if (input.find("+") != -1) {
			pos = input.find("+");
			operation = 1;
		}
		else if (input.find("-") != -1) {
			pos = input.find("-");
			operation = 2;
		}
		else if (input.find("*") != -1) {
			pos = input.find("*");
			operation = 3;
		}
		else if (input.find("/") != -1) {
			pos = input.find("/");
			operation = 4;
		}
		else if (input.find("%") != -1) {
			pos = input.find("%");
			operation = 5;
		}
		else if (input.find("^") != -1) {
			pos = input.find("^");
			operation = 6;
		}
		else {
			pos = -1;
			operation = 0;
		}

		//operandOne = stod(input.substr(0, pos));
		if (pos == 0) {
			operandOne = result;
		} 
		else {
			
			try {
				operandOne = stod(input.substr(0, pos));
			}
			catch (const std::invalid_argument&) {
				std::cerr << "Argument is invalid\n";
				continue;
			}
			catch (const std::out_of_range&) {
				std::cerr << "Argument is out of range for a double\n";
				continue;
			}
			
		}
		//operandTwo = stod(input.substr(pos + 1));
		
		try {
			operandTwo = stod(input.substr(pos + 1));
		}
		catch (const std::invalid_argument&) {
			std::cerr << "Argument is invalid\n";
			continue;
		}
		catch (const std::out_of_range&) {
			std::cerr << "Argument is out of range for a double\n";
			continue;
		}
		
		//cout << "\nOperandOne: " << operandOne;
		//cout << "\nOperandTwo: " << operandTwo;

		switch (operation) {
		case 1: result = add(operandOne, operandTwo);
			break;
		case 2: result = subtract(operandOne, operandTwo);
			break;
		case 3: result = multiply(operandOne, operandTwo);
			break;
		case 4: 
			try {
				result = divide(operandOne, operandTwo);
			}
			catch (runtime_error& e) {
				cout << e.what();
				continue;
			}
			break;
		case 5: result = mod(operandOne, operandTwo);
			break;
		case 6: result = power(operandOne, operandTwo);
			break;
		default: result = operandOne;
		}

		cout << "     " << result << "\n";
	}


	return 0;
}

double add(double operandOne, double operandTwo) {
	return operandOne + operandTwo;
}

double subtract(double operandOne, double operandTwo) {
	return operandOne - operandTwo;
}

double multiply(double operandOne, double operandTwo) {
	return operandOne * operandTwo;
}

double divide(double operandOne, double operandTwo) {
	if (operandTwo == 0) {
		throw runtime_error("Math error: Attempted to divide by Zero\n");
	}

	return operandOne / operandTwo;
}

double mod(double operandOne, double operandTwo) {
	
	return (int)operandOne % (int)operandTwo;
	
}

double power(double operandOne, double operandTwo) {
	if (operandTwo == 1) {
		return operandOne;
	}
	return operandOne * power(operandOne, operandTwo - 1);
}