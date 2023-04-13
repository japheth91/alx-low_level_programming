#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @max: maximum value of integers
 * @min: maximum value of integers
 * Return: pointer to a newly created array
 * NULL if min > max || malloc fails
 */
int *array_range(int min, int max)
{
	int range, i;
	int *n;

	range = 0;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);

	n = malloc(range * sizeof(int));
	if (n == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		n[i] = min + i;
	}
	return (n);
}
