#include "holberton.h"

/**
 * puts_recursion - prints fillowed by new line
 * @s s: string to be returned
 * Retuern : return each char
 */

void _puts_recursion(char *s)
{

	if (s == "\0")
	{
		_putchar("\n");
	}
	_putchar(*s);
	puts_recursion(s+1);
return (0);
