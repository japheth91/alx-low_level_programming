#include "main.h"
/**
 *
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
		_putchar(95);
	}
	_putchar('\n');
}
