#include "holberton.h"


/**
 * _memset - fills memomry with c constat byte
 * @ptr: starting address of memory to be filled
 * @x: value to be filled
 * @n: number of bytes to be filled starting  from ptr
 * Return:pointer to the memory
 */

char *_memset(char *ptr, char x, unsigned int n )
{
	char *str = ptr;
	while(n--){
		*ptr++ = x;
	}
	return (ptr);
}
