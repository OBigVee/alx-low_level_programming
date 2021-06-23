#include "holberton.h"

/**
* print_sign - check numbers
*@n : number to check
* return 0 0r 1
*/
int print_sign(int n)
{
int val;

if (n > 0)
{
	val = 1;
	_putchar('+');
}
else if (n == 0)
{
	val = 0;
	_putchar('0');
}
else
{
	val = -1;
	_putchar('-');
}

return (val);
}
