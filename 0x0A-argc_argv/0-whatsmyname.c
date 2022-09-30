#include <stdio.h>

/**
 * main - code entry
 * program prints the new name,without having to compile it again.
 * @argc: counts the numbers of flags
 * @argv: pointer to array of flags
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *(argv++));
	return (0);
}
