#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - code entry
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char a;
	char z = 'z';

	i = 1;
	while (i < 11)
	{
		for (a = 'a'; a <= z; a++)
		{
			_putchar(a);
		}
		i++;
		_putchar('\n');
	}
}
