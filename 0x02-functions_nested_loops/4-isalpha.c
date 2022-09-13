#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - function checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
