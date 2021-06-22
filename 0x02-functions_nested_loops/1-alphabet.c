#include <string.h>
#include"holberton.h"

/**
 * print_alphabet - Entry point
 * 
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int idx = 0;
	while (idx < 26)
	{
		_putchar(alphabet[idx]);
		idx++;
	}
	_putchar('\n');
	return;
}
