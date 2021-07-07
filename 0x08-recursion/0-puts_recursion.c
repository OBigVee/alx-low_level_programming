#include "holberton.h"

/**
 * _puts_recursion - prints fillowed by new line
 * @s s: string to be returned
 * Return : void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
