#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower case character
 *
 * @c: represents ascii table character
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
