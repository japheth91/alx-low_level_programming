#include <stdio.h>
/**
 * main - main function
 * Description - program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
