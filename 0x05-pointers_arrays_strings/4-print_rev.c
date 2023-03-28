#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: string to be reverse
 */
void print_rev(char *s)
{
	int i;
	int c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	for (i = c ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
