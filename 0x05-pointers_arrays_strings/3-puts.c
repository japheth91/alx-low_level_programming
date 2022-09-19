#include "main.h"

/**
 * _puts - this is a function that puts something
 * @str: a parameter to _puts function
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
