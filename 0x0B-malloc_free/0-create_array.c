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

	if (size == 0)
	{
		return (NULL);
	}
	arr = (malloc(size));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
