#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function sums 2 int
 * @a: first val
 * @b: second val
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function sub 2 int from each other.
 * @a: first val
 * @b: second val
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul -function multiply 2 int by each other.
 * @a: first val
 * @b: second val
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div -function divides 2 intger.
 * @a: first val
 * @b: second val
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod -function returns the remainder of the division of a by b.
 * @a: first val
 * @b: second val
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
