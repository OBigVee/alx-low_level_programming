#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function prints strings followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char*);
		if (c == NULL)
			printf("nil");
		else
			printf("%s", c);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
