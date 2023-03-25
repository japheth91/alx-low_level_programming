#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: functiohn parameter
 * Return: 1 for success 0 for failure
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
