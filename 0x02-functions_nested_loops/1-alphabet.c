#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * _putchar - prints alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
