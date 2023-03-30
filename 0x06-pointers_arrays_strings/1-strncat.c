#include "main.h"
/**
 * *_strncat - concatenates two string
 * @dest: destination stringb
 * @src: source stringb
 * @n: number of characters
 * Return: concatenated stringb
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[(destlen + i)] = src[i];
	}
	dest[(destlen + i)] = '\0';
	return (dest);
}
