#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
  * getstrlen - function get the length of a string.
  * @s:string
  * Return: length of string
  */
int getstrlen(char *s);

/**
  * getstrlen - function get the length of a string.
  * @s:string
  * Return: length of string
  */

int getstrlen(char *s)
{
	int size = 0;

	for ( ; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - function concatenates two strings.
 * @s1: pointer to char of the string to be appended to.
 * @s2: pointer to char of the string which is to be appended.
 * the returned pointer points to a newly allocated memory space that
 * contains the contents of 's1' followed by the contents of s2,
 * and null terminated.
 * if NULL is passed, it is treated as an empty string.
 * Return: Null on failure else pointer to the new allocated
 * memory with 's1' and 's2'
 */

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *ptr_s3;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size1 = getstrlen(s1);
	size2 = getstrlen(s2);

	ptr_s3 = malloc((size1 + size2) * sizeof(char) + 1);

	if (ptr_s3 == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
			ptr_s3[i] = s1[i];
		} else
		{
			ptr_s3[i] = s2[i - size1];
		}
	}

	ptr_s3[i] = '\0';

	return (ptr_s3);
}
