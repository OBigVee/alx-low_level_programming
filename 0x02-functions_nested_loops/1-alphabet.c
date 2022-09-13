#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - entry code
 * Description: print print_alphabet- alphabet in lowercase.
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	for (a = 'a'; a <= z; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
