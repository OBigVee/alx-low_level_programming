#include "main.h"
#include <stdio.h>
/**
 * factorial - function returns the factorial of a given number.
 * @n: the number of factorial to be computed.
 * if 'n' is lower than 0, the functino should return -1 to indicate an error
 * Factorial of 0 is 1.
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
