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
    if (a!='e' && a!='q'){
        putchar(a);
    }
    a++;
	}
	putchar('\n');
	return (0);
}
