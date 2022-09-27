#include "main.h"
#include <stdio.h>

/**
  * *_strpbrk - function searches a string for any of a
  * set of bytes.
  * @s: pointer to string
  * @accept: pointer to string to be searched.
  * The function locates the first occurences in the
  * string 's' of any of the bytes in the string 'accept'
  * Return: a pointer to the byte in 's' that matches one of the bytes
  * in 'accept', or NULL if no such byte is found.
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = s + i;
				return (ptr);
			}
		}
	}
	return (0);
}
