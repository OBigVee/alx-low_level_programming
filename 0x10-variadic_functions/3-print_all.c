#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_int - prints int
 * @ap: arguments from print_all
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints int
 * @ap: arguments from print_all
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_char - prints int
 * @ap: arguments from print_all
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_string - prints int
 * @ap: arguments from print_all
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char*);

	s == NULL ? printf("nil") : printf("%s", s);
}


/**
 * print_all - function prints anything followed by a new line.
 * @format: the number of strings passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	char *separator = "";

	typesToPrintStruct printType[] = {

		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(ap, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", separator);
				printType[j].printer(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
