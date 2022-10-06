#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function allocated memory using malloc
 * @b: allocated size of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(sizeof(b));
	if (mem == 0)
	{
		exit(98);
	}
	return (mem);
}
