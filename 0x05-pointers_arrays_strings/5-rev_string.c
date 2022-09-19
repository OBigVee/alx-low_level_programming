#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * rev_string - function reverses a string
  * @s: string printed in reversed
  * Return: 0
  */

void rev_string(char *s)
{
	int j, s_size, temp;

	s_size = strlen(s);

	j = 0;
	while (j < (s_size / 2))
	{
		temp = s[j];
		s[j] = s[s_size];
		s[s_size] = temp;
		s_size--;
		j++;
	}
}
