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
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	if (array != NULL)
	{
		int idx;

		for (idx = 0; idx < size; idx++)
		{
			if (cmp(array[idx]))
				return (idx);
		}
		/*for (idx = 0; idx < size; ++idx)
		{
			printf("array[%d] = %d\n", idx, array[idx]);
		}
		cmp(array[idx]);*/
	}
	return (-1);
}
