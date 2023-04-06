#include "main.h"
/**
 * factorial - function returns factorial of a given number
 * @n: function parameter
 * Return: -1 failurre
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
