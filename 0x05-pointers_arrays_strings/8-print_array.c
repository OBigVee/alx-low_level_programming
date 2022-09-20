#include "main.h"
#include <stdio.h>

/**
  * print_array - function prints n elements of
  * an array of int, followed by a new line.
  * @a: array
  * @n: is the number of elements of the array
  * to be printed
  * nums must b seprated by comma, followed by
  * a space
  * The numbers should be displayed in the same
  * order as they are stored in the array
  * you are allowed to use printf
  * Return:0
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n - 1 == i)
		{
			printf("%d", a[i]);
		}
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}

