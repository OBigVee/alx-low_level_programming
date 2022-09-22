#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function reverse the content of
 * __ an array of integers
 * @n: is the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 1; i <= n; i++)
	{
		temp = a[i];
		*(a + i) = *(a + n);
		*(a + n) = temp;
		n--;
	}
}

