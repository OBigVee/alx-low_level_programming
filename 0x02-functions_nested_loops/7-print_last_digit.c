#include "holberton.h"
#include <stdlib.h>
/**
 *print_last_digit - print last digit.
 *
 *Return: the value of the last digit.
 */

int print_last_digit(int n)
  {
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
		return (nv);
}
/*{
  int lastDigit;
  lastDigit = n%10;
  if(lastDigit<0)
  { 
   lastDigit =  abs(lastDigit);
    _putchar(lastDigit % 10 + '0');
  }
  
  
  return (lastDigit);
}*/

