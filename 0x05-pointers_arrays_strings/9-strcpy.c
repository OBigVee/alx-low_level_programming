#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * *_strcpy - function copies the string pointed
  * to by src, including the terminating null byte
  * - (\0) to the buffer pointed to by dest.
  * @dest: pointer to copy string to.
  * @src: pointer to copy string from.
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i, size_src;

	size_src = strlen(src);

	for (i = 0; i < size_src;)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
