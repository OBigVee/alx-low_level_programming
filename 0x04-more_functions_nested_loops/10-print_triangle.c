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
	int i;
	int calibrate;

	calibrate = size;
	if (size < 0)
		_putchar('\n');
	while (size > 0)
	{
		for (i = 0; i < calibrate; i++)
			_putchar((i < size - 1) ? ' ' : '#');
		_putchar('\n');
		size--;
	}
}
