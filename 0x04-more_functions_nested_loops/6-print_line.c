#include <stdio.h>
#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * You can only use _putchar function to print
 * @n: is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
