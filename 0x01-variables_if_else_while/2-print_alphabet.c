#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry code
 * Description: prints "alphabets"
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar ('\n');
	return (0);
}

