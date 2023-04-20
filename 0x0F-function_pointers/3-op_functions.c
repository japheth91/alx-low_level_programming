#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - performs the difference of teo integers
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - performs the product of two integbers
 * @a: first number
 * @b: second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division of two numbers
 * @a: first number
 * @b: second number
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - performs the modular operation of two numbers
 * @a: first number
 * @b: second number
 * Return: the remander of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}

