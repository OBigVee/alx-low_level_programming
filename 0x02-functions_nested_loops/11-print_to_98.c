#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural
 * numbers from n to 98, followed by a new line.
 * @n: number to start from
 * Return: int
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	} else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
