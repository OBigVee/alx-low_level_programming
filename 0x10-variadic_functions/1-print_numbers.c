#include "variadic_functions.h"

/**
 * print_numbers - function prints number by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (n != 0)
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	va_end(list);
	putchar('\n');
}
