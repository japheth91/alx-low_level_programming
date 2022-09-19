#include "main.h"

/**
 * swap_int - swaps two integbers' values
 * @a: first integer
 * @b: second intger
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
