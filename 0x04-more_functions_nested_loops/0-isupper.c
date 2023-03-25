#include "main.h"
/**
 * _isupper - checks if an alphabet is uppercase or not
 * @c: function parmter
 * Return: 1 if c is upper 0 if otherwise
 */
int _isupper(int c)
{
	if (c <173 && c > 96)
		return (1);
	else
		return (0);

}
