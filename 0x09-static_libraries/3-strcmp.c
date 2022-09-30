#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - function compares two str
 * function works like strcp
 * @s1: pointer to string to be compared
 * @s2: pointer to string to be compared with
 * Return: int 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
