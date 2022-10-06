#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function creates an array of integers
 * the created array will contain all the values from
 *  'min' to max in ascending order.
 *  @min: the minimum element in the array to be created
 *  @max: the max element in the range of values to be created for the array.
 *  Return: pointer to the newly created array
 *  NUll if min > max
 *  Null if malloc fails.
 */

int *array_range(int min, int max)
{
	int i, *mem_block;

	if (min > max)
		return (NULL);
	mem_block = malloc(max * sizeof(max) + 1);
	if (mem_block == 0)
		return (NULL);
	for (i = 0; i < max + 1; i++)
	{
		mem_block[i] = min + i;
	}
	/*mem_block[i] = '\0';*/

	return (mem_block);
}
