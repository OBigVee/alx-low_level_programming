#include <stdio.h>
#include "main.h"

/**
  * *string_toupper - function that changes all
  * __ lowercase of a string to uppercase
  * @n: lowercase string
  * Return: uppercase string
  */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] -= 32;
		}
	}
	return (n);

}
