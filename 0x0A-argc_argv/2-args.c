#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of argument
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
