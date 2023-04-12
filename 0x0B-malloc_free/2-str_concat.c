#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * returns a newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
	return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
