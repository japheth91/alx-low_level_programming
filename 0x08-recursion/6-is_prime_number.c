#include "main.h"
/**
 * is_prime_number - checks if a number is an integer or not
 * @n: integer
 * Return: 1 for success 9 for failure
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2 ; i < n ; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
