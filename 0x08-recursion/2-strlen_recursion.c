#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string
 * Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
