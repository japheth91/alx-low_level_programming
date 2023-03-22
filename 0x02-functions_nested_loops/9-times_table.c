#include "main.h"
/**
 * times_table - function that prints times table for 9
 *
 */

void times_table(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 9)
	{
		y = 0;
		while (y < 10)
		{
			z = y * x;

			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
