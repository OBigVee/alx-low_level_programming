#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - function returns a pointer to a new string
 * which is a duplicate of the string 'str'.
 * Memory for d new string is obtained with malloc,
 * and can be freed with 'free'.
 * @str: string that is to be copied into another memory.
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *_str;
	unsigned int i;

	if (str == 0)
	{
		return (0);
	}
	_str = malloc(strlen(str) + 1);
	for (i = 0; i < strlen(str); i++)
	{
		_str[i] = str[i];
	}
	_str[i] = '\0';
	return (_str);
}
