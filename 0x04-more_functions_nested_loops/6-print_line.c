#include "main.h"
/**
 * print_line - prints _
 * @n: function parameter
 * Remain: 0 always
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
		_putchar('\n');
}
