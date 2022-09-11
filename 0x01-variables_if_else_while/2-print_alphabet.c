#include <stdio.h>

/**
 * main - prints lower case alphagbets
 *
 * Description: using the main function
 * this program prints "Programing Variables
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
