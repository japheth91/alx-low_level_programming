#include "main.h"
/**
 * sqrt_recursion_helper - checks the condition for square root
 * @num: number
 * @i: possible square root of number
 * Return: function, -1 for failure
 */
int sqrt_recursion_helper(int num, int i)
{
	if (i * i == num)
		return (i);
	if (i * i > num)
		return (-1);
	return (sqrt_recursion_helper(num, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: helper function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_recursion_helper(n, 1));
}
