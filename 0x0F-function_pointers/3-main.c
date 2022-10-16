#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - code entry
 * @argc: numbers of argument at run time
 * @argv: arrays of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	char num1, num2, *operation;

	if (argc != 4)
	{
		printf("Error,\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operation = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operation == '/' && num2 == 0) ||
			(*operation == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operation)(num1, num2));
	return (0);
}
