#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int getstrlen(char *s);

/**
  * getstrlen - function get the length of a string.
  * @s:string
  * Return: length of string
  */

int getstrlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * *string_nconcat - function concatenates two string
 * the returned pointer points to a newly allocated space in memory,
 * which contains 's1', followed by the first n bytes of 's2', and
 * null terminated.
 * function return NULL on failure.
 * entire string is used if n >= len(s2)
 * NULL is treated as an empty string.
 * @s1: first string
 * @s2: second string
 * @n: number of first n byte of 's2'
 * Return: pointer to new memo
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	int i, size1;
	char *memo_block;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	size1 = getstrlen(s1);

	memo_block = malloc((size1 + n) * sizeof(char) + 1);

	if (memo_block == NULL)
		return (0);
	i = 0;
	j = 0;
	for ( ; i < size1; i++)
	{
		memo_block[i] = s1[i];
	}
	for ( ; j < n; j++)
	{
		memo_block[i + j] = s2[j];
	}

	memo_block[i + j + 1] = '\0';

	return (memo_block);
}
