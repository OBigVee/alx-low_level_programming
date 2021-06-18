#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(48 + number);
		number++;
	}

	putchar('\n');
	return (0);
}
