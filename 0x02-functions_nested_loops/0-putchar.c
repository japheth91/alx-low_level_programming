#include "main.h"

/**
 * _putchar - writes the chnaracter c to stdout
 * @c: Thne character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and error is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
