#include "main.h"
/**
 * _strspn - a function that gets length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in  initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (count++);
		i++;
	}
	return (count);
}
