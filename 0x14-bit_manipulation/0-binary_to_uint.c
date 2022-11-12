#include "main.h"

/**
 * binary_to_uint - function converts a binary to an unsigned int.
 * @b: pointer to a string of 0 or 1 chars
 *
 * Return: converted number, or 0 if
 * - there is one or more chars in the string @b that is not 0 or 1
 * - @b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (b == NULL)
		return (0);
	/**
	 * check if all the values in b are 0 or 1
	 */
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
