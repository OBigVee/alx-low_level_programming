#include <stdio.h>
#include "main.h"

/**
 * check_modulo - function checks the mudolo and return 1 if true.
 * @n: int to check for dividend
 * @val: int divisor
 * Return: int
 */

int check_modulo(int n, int val);

/**
 * is_prime_number - function returns 1 if the input integer is prime number
 * @n: interger to check for that is the dividend
 * Return: 1 or 0
 */


int is_prime_number(int n)
{
	return (check_modulo(n, 2));
}

/**
 * check_modulo - function checks the mudolo and return 1 if true.
 * @n: int to check for dividend
 * @val: int divisor
 * Return: int
 */

int check_modulo(int n, int val)
{
	if ((val == n) && (n > 1))
		return (1);
	else if (n % val == 0 || n <= 1)
		return (0);
	else
		return (check_modulo(n, val + 1));
}
