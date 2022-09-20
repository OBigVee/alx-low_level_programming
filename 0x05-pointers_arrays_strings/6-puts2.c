#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts2 - function prints every other characters of a string
  * starting with the first character followed by a new line.
  * @str: string to process
  * Return: 0
  */

void puts2(char *str)
{
	int i, size;

	i = 0;
	size = strlen(str);
	while (size > i)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
