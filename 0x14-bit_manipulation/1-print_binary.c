#include "main.h"

/**
 * _pow - cal (base to power)
 * @base: base of exp
 * @power: power of exp
 * Return: value of the computation of base^power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *= base;
	return (num);

}

/**
 * print_binary - function prints the binary representation of a number
 * @n: number to be converted to binary
 * Return: awlays 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int  div, checker;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		checker = n & div;
		if (checker == div)
		{
			flag = 1;
			_putchar('1');
		} else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
		/**
		 * res = n % base2;
		 * printf("%ld", res);
		 * count++;
		 */
	}
}
