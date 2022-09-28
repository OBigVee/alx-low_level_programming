#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function returns the value of x raised to the power of y.
 * @x: base value
 * @y: power value
 * if 'y' is lower than 0, the function returns -1.
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
