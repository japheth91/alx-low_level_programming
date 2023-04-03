#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @n: function paramter
 * Return: the pointer to dest
 */
char *rot13(char *n)
{
	int i, j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
		}
	}
	return (n);
}
