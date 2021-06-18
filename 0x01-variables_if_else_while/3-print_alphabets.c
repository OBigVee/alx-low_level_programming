 
#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	char A = 'A';
	while (A <= 'Z')
	{

		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
