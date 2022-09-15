#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0.
 * @n: n times table
 * Return: 0
 */
void print_times_table(int n)
{
	int result;
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n < 0 || n > 15)
				continue;
			else
			{
				result = i * j;
				if (result == 0)
					_putchar(48 + result);
				else if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + result);
				} else if (result < 100)
				{
					_putchar(' ');
					_putchar(48 + result / 10);
					_putchar(48 + result % 10);
				} else
				{
					_putchar(48 + result / 100);
					_putchar(48 + (result - 100) / 10);
					_putchar(48 + result % 10);
				}
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
