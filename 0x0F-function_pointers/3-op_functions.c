#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: first operand
 * @b: the second operand
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first operand
 * @b: second operand
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: first operand
 * @b: second operand
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: first operand
 * @b: second operand
 * Return: the quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first operand
 * @b: second operand
 * Return: the remainder as integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
