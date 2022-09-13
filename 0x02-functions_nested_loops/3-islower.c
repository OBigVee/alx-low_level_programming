#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - function
 * @c : character to check the case
 * Return: 0 if false else 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
