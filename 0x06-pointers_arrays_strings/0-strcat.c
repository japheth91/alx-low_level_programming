#include "main.h"

/**
 * _strcat - this is a function strcat
 * @dest: first param
 * @src: second param
 * Return: a string
 */
char *_strcat(char *dest, char *src);
{
	int a, b, i;
	int len1 = 0;
	int len2 = 0;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
		len1++;
	}
	for (b = 0; *(src + b) != '\0'; b++)
	{
		len2++;
	}
	for (i = 0; i <= len2; i++)
	{
		*(dest + (len1 + i)) = *(src + 1);
	}

	return (dest);
}
