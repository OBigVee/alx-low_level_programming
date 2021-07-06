#include "holberton.h"


/**
 * _memset - fills memomry with c constat byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled starting  from ptr
 * Return:pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0 ; i++, n--)
{
	s[i] = b;
}

return (s);
}
