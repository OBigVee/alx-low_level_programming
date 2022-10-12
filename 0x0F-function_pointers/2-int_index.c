#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function searches for an integer
 * @array: array of int elements
 * @size: array size
 * @cmp: callback function
 * Return: 0 or 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]))
			return (idx);
	}
	return (-1);
}
