#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function creates an array of chars and init with a char
 * @size: size of the array
 * @c: character to initialize with
 * Return: char / NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;
	
	arr = (malloc(size));
	if (size == 0 || arr == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
