#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function allocates memory for an array
 * of 'nmemb' with element of 'size' bytes each and returns a pointer to
 * the allocated memory.
 * the memory is intialized with zero
 * @nmemb: no of elements in the array
 * @size: bytes of each elements in the array
 * Return: NULL if malloc fails or if nmemb or size is o
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem_block;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_block = calloc(nmemb, size);

	if (mem_block)
		return (mem_block);
	return (NULL);
}
