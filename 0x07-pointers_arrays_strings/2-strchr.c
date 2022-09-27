#include "main.h"
#include <stdio.h>

/**
  * _strchr - function locates a chracter in
  * a string.
  * @s: pointer to memory of string.
  * @c: character to search for in s
  * Return: a pointer to the first occurence of
  * the character c in the string s, or NULL if
  * the character is not found.
  */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < sizeof(s) && s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (s + i);
}
