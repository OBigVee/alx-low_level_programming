#include <stdio.h>
#include <stdlib.h>

/**
 * main - code entry
 * program multiplies 2 numbers
 * program prints Error if it does not receive 2 arguments.
 * @argc: counts the numbers of flags
 * @argv: pointer to array of flags.
 * Return: Error or 1
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

