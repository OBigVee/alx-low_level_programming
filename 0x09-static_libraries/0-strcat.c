#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - function concatenate strings
 * This function appends the src string to
 * _ the dest string, overwriting the terminating
 * _ null byte (\0) at the end of dest, and then
 * adds a terminating null byte
 * @dest: pointer to append string to
 * @src: pointer to copy copy string from
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	size_t j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < strlen(src); j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
