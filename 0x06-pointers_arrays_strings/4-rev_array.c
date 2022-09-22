#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function reverse the content of
 * __ an array of integers
 * @a: array
 * @n: is the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i <= n - 1; i++)
	{
		temp = a[i];
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = temp;
		n--;
	}
}

