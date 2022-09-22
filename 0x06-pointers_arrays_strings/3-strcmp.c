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
	int i, j;

	i = strlen(s1);
	j = strlen(s2);

	if (i <= j)
	{
		return (-15);
	} else if (i == j)
	{
		return (0);
	} else 
	{
		return (15);
	}
}
