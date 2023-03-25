#include "main.h"
/**
 * _isupper - checks if an alphabet is uppercase or not
 * @c: function parmter
 * Return: 1 if c is upper 0 if otherwise
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);

}
