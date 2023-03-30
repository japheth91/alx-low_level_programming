#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: the destination string
 * @src: source string
 * @n: function parameter
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destlen = 0;

	while (dest[i++])
		destlen++;
	for (i = 0 ; src[i] && i < n ; i++)
		dest[destlen++] = src[i];
	return (dest);
}
