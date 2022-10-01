#include <stdio.h>
#include <stdlib.h>
/**
 * isNotInt - function check if s is an int
 * @s: string to check
 * Return: 0 or 1
 */

int isNotInt(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - code entry
 * program adds positive numbers
 * prints '0' if no number is passed.
 * prints 'Error' if one of the number contains symbols that are not
 * digits, and return 1.
 * @argc: counts the numbers of arguments
 * @argv: pointer to array of arguments
 * Return: 0 or 1
 */

int main(int argc, char const *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isNotInt(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
