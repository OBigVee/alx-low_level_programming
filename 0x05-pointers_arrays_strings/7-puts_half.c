#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts_half - function prints half of a string,
  * followed by a new line.
  * @str: string to be processed
  * Return: 0
  */
void puts_half(char *str)
{
	int i, size;

	size = strlen(str);
	if (size % 2 == 0)
	{
		i = size / 2;
		for (i = size / 2; str[i] != '\0'; )
		{
			_putchar(str[i]);
			i++;
		}
	} else if (size % 2 != 0)
	{
		i = (size + 1) / 2;
		for (i = (size + 1) / 2; str[i] != '\0';)
		{
			_putchar(str[i]);
			i++;
		}
	}

	_putchar('\n');
}
