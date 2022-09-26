#include <stdio.h>
#include "main.h"

/**
  * *_memcpy - function copied memory area
  * function copies n bytes from memomry area 'src'
  * to memory area 'dest'
  * @dest: pointer to copy src t0
  * @src: pointer to copy from
  * @n: byte of memory
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	while (i)
	{
		if (dest[i] != '\0')
			i++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + i - 1) = *(src + j);
		i++;
	}
	return (dest);
}
