#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function returns the length of a string.
 * @s: string whose length will be returned
 * Return:  int  the length of the s
 */

int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		count =+ _strlen_recursion(s + 1) + 1;
	}
	
	return (count);
}
