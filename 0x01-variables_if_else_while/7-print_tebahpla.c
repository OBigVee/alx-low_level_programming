#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry code
 * Description: prints "lower case alphabets in reverse "
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (z >= a)
	{
		putchar(z);
		--z;
	}
	putchar ('\n');
	return (0);
}

