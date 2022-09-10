#include <stdio.h>
/**
 * main - Entry code
 * Description: prints "all the numbers of base 16 in lowercase"
 * Return: 0
 */

int main(void)
{
	char start = '0';
	char end = '9';
	char a;
	char f = 'f';

	while (start <= end)
	{
		putchar(start);
		start++;
	}

	for (a = 'a'; a <= f; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
