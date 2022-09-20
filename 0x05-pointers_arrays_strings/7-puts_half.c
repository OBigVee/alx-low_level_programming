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
	if (size == 0)
		return (0);
	i = size / 2;
	while (i < size)
	{
		_putchar(str[i]);
		i++;
	}
}
