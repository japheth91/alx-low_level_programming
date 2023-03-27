#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: array to be worked on
 * Return: c
 */
int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	return (c);
}
