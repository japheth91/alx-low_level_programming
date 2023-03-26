#include "main.h"
/**
 * print_line - prints '_' chnaracter n times
 * @n: function parameter
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
