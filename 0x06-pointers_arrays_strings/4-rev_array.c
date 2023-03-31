#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a:  array of inetgers
 * @n: number of elements in integer
 * Return: revers
 *
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n ; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
