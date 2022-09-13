#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			result = i * j;
			_putchar(',');
			_putchar(' ');

			if (result >= 10)
			{
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(result + 48);
			}
		}
		_putchar('\n');
	}
}
