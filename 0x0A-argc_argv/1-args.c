#include <stdio.h>

/**
 * main - code entry
 * program prints the number of arguments passed into it.
 * @argc: counts the numbers of flags
 * @argv: pointer to array of flags
 * Return: 0 or 1;
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
