#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * *_memset - function fills memory with a constant byte.
  * the function fills the first n bytes of the memory area
  * pointed to by s with the constant byte b.
  * @s: memory of array of char
  * @b: constant byte to fill memory with
  * @n: number of bytes of memory
  * Return: a pointer to the memory of s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	while (i)
	{
		if (s[i] != 0)
			i++;
	}
	for (j = 0; j < n; j++)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

