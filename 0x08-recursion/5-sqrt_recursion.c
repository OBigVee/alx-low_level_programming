#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * check_square - function checks if the multiplication of 2 int eqauls to 'n'.
 * @n: value to check for
 * @val: value to be multiplied together.
 * Return: int
 */

int check_square(int n, int val); /* prototype function*/


/**
 * _sqrt_recursion - function returns the natural square root of a number.
 * @n: int whose sqrt will be computed.
 * if 'n' does not have a natural square root, the function returns -1.
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (check_square(n, 1));
}


/**
 * check_square - function checks if the multiplication of 2 int eqauls to 'n'.
 * @n: value to check for
 * @val: value to be multiplied together.
 * Return: int
 */

int check_square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (check_square(n, val + 1));
	else
		return (-1);
}
