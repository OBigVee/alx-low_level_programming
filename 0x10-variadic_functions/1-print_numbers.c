#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function prints strings
 * @separator:  is the string to be printed between the integers
 * @n:is the number of integers passed to the function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
