#include "main.h"
/**
 * print_line - prints '_' chnaracter n times
 * @n: function parameter
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		i++;
		_putchar('_');
	}
	_putchar('\n');
}
