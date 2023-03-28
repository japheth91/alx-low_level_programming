#include "main.h"
/**
 * puts_half - prints half of str
 * @str: function parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int i, c = 0;

	for (i = 0 ; str[i] != 0 ; i++)
		c++;
	if (c % 2 == 0)
	{
		for (i = c / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (c % 2 != 0)
	{
		for (i = (c - 1) / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
