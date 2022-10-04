#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int i, j;
	char *ptr_s3;

	ptr_s3 = malloc(strlen(s1) + strlen(s2));

	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] != '\0')
		{
			ptr_s3[i] = s1[i];
		}
	}

	for (j = 0; j < strlen(s2); j++)
	{
		ptr_s3[i + j] = s2[j];
	}
	ptr_s3[i + j + 1] = '\0';

	return (ptr_s3);
}
