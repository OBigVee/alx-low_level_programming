 
#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';
	while (alpha <= 'Z')
	{

		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
