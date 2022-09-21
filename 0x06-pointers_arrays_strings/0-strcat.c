#include "main.h"

/**
 * strcat - this is a function strcat
 * @dest: first param
 * @src: second param
 * Return: a string
 */
char *_strcat(char *dest, char *src);
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
