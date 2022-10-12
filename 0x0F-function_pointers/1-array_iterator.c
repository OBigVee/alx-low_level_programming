#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function executes a callback function given as a parameters
 * on each element of an array.
 * @array: pointer to array
 * @size: size of array
 * @action: function pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
			action(array[i]);
	}
}

