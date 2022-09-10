#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry code
 * Description: prints "single digit num"
 * Return: 0
 */

int main(void)
{
	char a = '0';
	char z = '9';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar ('\n');
	return (0);
}

