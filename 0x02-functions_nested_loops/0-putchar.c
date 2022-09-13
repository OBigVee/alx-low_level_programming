#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - entry code
 * Description: print _putchar
 * Return: 0
 */

int main(void)
{
	size_t i;
	char str[] = "_putchar";

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
