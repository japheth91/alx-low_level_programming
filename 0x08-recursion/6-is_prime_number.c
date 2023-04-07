#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number - returns 1 if integers is a prime number
 * @n: number to be checked
 * Return: integer
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
/**
 * is_prime - checks if it is a prime number
 * @n: number
 * @i: number of times to be checked
 * Return: 1 for success 0 for failure
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (is_prime(n, i + 1));
}
