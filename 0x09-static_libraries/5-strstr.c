#include "main.h"
#include <stdio.h>

/**
  * *_strstr - function locates a substring.
  * Instructions: ------------- function
  * function finds the first occurence of the substring 'needle'
  * in the string 'haystack'. The terminating null bytes (\0) 
  * are not compared.
  * @haystack: pointer to string to be process.
  * @needle: pointer to the string to be searched for.
  *
  * Return: a pointer to the beginning of the located substring
  * , or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*(haystack + i) == needle[j])
			{
				return (haystack + j);
			}
		}
	}
	return (0);
}
