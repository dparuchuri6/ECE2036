#ifndef SimpleCalculator_H
#define SimpleCalculator_H

#include <iostream>
#include <string>
using namespace std;

/**
 * add
 *
 * Adds the two operands
 *
 * @param operandOne first operand of operation
 * @param operandTwo second operand of operation
 * @return sum of two operands
 */
double add(double operandOne, double operandTwo);

/**
 * subtract
 *
 * Substracts the two operands
 *
 * @param operandOne first operand of operation
 * @param operandTwo second operand of operation
 * @return difference of two operands
 */
double subtract(double operandOne, double operandTwo);

/**
 * multiply
 *
 * Multiplies the two operands
 *
 * @param operandOne first operand of operation
 * @param operandTwo second operand of operation
 * @return product of two operands
 */
double multiply(double operandOne, double operandTwo);

/**
 * divide
 *
 * Divides the two operands
 *
 * @param operandOne first operand of operation
 * @param operandTwo second operand of operation
 * @return quotient of two operands
 */
double divide(double operandOne, double operandTwo);

/**
 * Mod
 *
 * Finds the remainder
 *
 * @param operandOne first operand of operation
 * @param operandTwo second operand of operation
 * @return product of two operands
 */
double mod(double operandOne, double operandTwo);

/**
 * power
 *
 * Finds the power of the first operand raised to the
 * second operand 
 *
 * @param operandOne first operand of operation
 * @param operandTwo second operand of operation
 * @return product of two operands
 */
double power(double operandOne, double operandTwo);

#endif
