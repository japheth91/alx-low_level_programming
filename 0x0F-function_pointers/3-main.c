#include <stdio.h>
#include "3-calc.h"
/**
 * main - performs the operatim
 * @argc: The number of arguments
 * @argv: array of the pointers
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	chr *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[1]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
