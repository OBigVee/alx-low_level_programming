#include <stdio.h>
/**
 * main - code entry
 * program prints all arguments it receives
 * @argc: counts the number of flags
 * @argv: pointer to array of flags
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
