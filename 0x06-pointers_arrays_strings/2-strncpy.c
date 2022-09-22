#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - function copies a string
 * function works like strncpy
 * @dest: pointer to copy str to
 * @src: pointer to copy string from
 * @n: byte of src to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = src[i];
	}
	*(dest + i) = '\0';
	return (dest);
}
