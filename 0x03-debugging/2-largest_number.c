#include "main.h"

/**
 * largest_number - returns the largest number off 3 numbers
 * @a: 1st num
 * @b: 2nd num
 * @c: 3rd num
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b &&  a >= c)
	{
		largest = a;
	} else if (b >= a && b >= c)
	{
		largest = b;
	} else
	{
		largest = c;
	}
	return (largest);
}
