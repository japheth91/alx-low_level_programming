#include "main.h"
/**
 * times_table - function that prints times table for 9
 *
 */

void times_table(void)
{
	int i, j, z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			z = i * j;
			if (j == 0)
			{
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
			}
		_putchar('\n');
	}
}
