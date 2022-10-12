#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function prints a name
 * @name: name to be printed
 * @f: funtion pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
