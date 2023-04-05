#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to be located
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *p = needle;
		
		while (*haystack && *p && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
