#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int result = i * j;

			if (result <= 10)
			{
				_putchar(result + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
