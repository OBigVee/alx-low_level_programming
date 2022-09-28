#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function prints a string followed by a new line.
 * @s: pointer to string to be printed.
 * Return: always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	} else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
