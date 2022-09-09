#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry code
 * Description: prints "single digit of base 10 from 0"
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int z = 10;

	while (a < z)
	{
		putchar(49 + a);
		a++;
	}
	putchar ('\n');
	return (0);
}

