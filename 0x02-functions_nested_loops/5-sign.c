#include <stdio.h>
#include "main.h"
/**
 * print_sign - this function sign
 * @n: checks if the number is zero or not
 * Return: 1 for greater than zero, 0 for zero and -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}