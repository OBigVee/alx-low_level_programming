#include <string.h>
#include"holberton.h"

/**
 * print_alphabet - Entry point
 * 
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int idx;
	for(idx=0 ; idx < (int) strlen(alphabet) ; idx++)
	{
		_putchar(alphabet[idx]);
	}
	_putchar('\n');
	
}
