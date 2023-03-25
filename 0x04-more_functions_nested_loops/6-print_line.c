#include "main.h"
/**
 * print_line - prints _
 * @n: function parameter
 * Remain: 0 always
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n < 0 && n == 0)
		{
		_putchar('\n');
		}
		i++;
		_putchar('_');
		_putchar('_');
	}
		_putchar('\n');
}
