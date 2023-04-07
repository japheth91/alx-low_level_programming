#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparingFunction - compares each character of the string
 * @s: string
 * @n1: smallest integer
 * @n2: biggest integer
 * Return: 1
 */
int comparingFunction(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparingFunction(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if the string is a palindrome
 * @s: string
 * Return: 1 for success 0, for failure
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparingFunction(s, 0, _strlen_recursion(s) - 1));
}
