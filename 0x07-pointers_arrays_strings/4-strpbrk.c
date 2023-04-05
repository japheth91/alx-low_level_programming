#include "main.h"
/**
 * _strpbrk - searches string for any set of byte
 * @s: string to be searched
 * @accept: set of bytes
 * Return: string if successful and NULL if unssuccesful
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
			return (s);
			}
		a++;
		}
		s++;
	}
	return (0);
}
