#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	char i, j;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}