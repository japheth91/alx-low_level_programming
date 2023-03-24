#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - checks for positive or negative
 *
 * @i: function parameter
 * Return: 0-
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
