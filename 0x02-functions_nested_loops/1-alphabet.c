#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function  prints alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
