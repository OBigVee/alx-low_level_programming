#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - function concat two strings
 * The _strncat function is similar to the _strcat
 * _ function, except that
 * ^ it will use at most n bytes from src; and
 * ^src does not need to be null-terminated if it
 * _ contains n or more bytes
 * @dest: pointer to concat string with
 * @src: pointer to copy string from
 * @n: at most bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
