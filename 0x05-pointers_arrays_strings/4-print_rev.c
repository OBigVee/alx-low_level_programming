#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  * print_rev - function prints a string in reverse
  * @s: the string will be printed in reverse
  * Return: 0
  */

void print_rev(char *s)
{
	int i, str_size;

	i = 1;
	str_size = strlen(s);
	while (str_size + 1 > i)
	{
		_putchar(s[str_size - i]);
		i++;
	}
	_putchar('\n');
}
