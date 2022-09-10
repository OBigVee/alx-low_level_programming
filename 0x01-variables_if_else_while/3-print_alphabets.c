#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry code
 * Description: prints "alphabets"
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <=  Z)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
