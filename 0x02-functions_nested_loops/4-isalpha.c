#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the letter that represents the ascii table
 * Return: 1 if c is lower case or upper case 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
