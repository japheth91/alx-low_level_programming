#include <stdio.h>

/**
 * main - Printing of alphabet
 *
 * Description: this program prints alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
	putchar(n);
	}

	putchar('\n');
	return (0);
}
