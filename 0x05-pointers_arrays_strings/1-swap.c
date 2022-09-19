#include "main.h"
#include <stdio.h>
/**
 * swap_int - functions swap the values of two integers
 * @a: first val
 * @b: second val
 * Return - 0
 */
void swap_int(int *a, int *b)
{
	int *temp = a;
	*a = *b;
	*b = *temp;
}
