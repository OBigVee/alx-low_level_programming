#include <stdio.h>
#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed
 * by a newline.
 * @size:  is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;
	int calibrate;

	for (i = 0; size > 0 && i <= size; i++)
	{
		for (calibrate = 0; calibrate < size - i; calibrate++)
		{
			_putchar(32);
		}
		for (j = 0; j < i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
