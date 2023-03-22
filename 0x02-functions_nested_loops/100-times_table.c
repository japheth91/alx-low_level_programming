#include "main.h"
/**
 * print_times_table - n times table
 * @n: the number defines the table
 *
 * Return: no value
 */

void print_times_table(int n)
{
	int i, j, z;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');
			for (j = 1 ; j <= n ; j++)
			{
				_putchar(' ');
				_putchar(',');

			z = i * j;
			if (z <= 99)
				_putchar(' ');
			if (z <= 9)
				_putchar(' ');
			if (z >= 100)
			{
				_putchar((z / 100) + '0');
				_putchar(((z / 10) % 10) + '0');
			}
			else if (z <= 99 && z >= 10)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
