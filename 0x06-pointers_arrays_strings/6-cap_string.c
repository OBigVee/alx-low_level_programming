#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

#define SIZE 14

/**
  * *cap_string - function capitalize all words
  * __ of a string
  * seprators of words: space, tab, newline
  * __ , ; . ! ? " ( ) { }
  * @n: string
  * Return: char
  */

char *cap_string(char *n)
{
	int j;
	size_t i;

	char s_char[SIZE] = {',', ';', '!', '?', '"', '(', ')', '{', '}'
		, ' ', '\n', '\t', '.'};

	for (i = 0; i < strlen(n) && n[i] != '\0'; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (n[i] == s_char[j])
			{
				if (islower(n[i + 1]))
					*(n + i + 1) = ((int)*(n + i + 1)) - 32;
			}
		}
	}
	return (n);
}
