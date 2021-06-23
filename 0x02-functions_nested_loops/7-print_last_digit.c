#include "holberton.h"
/**
 *print_last_digit - print last digit.
 *
 *Return: the value of the last digit.
 */
int abs;
int print_last_digit(int n)
{
  
  if(n<0)
  {
    abs = (-1 * n);
  }
  int lastDigit = abs % 10;
  
    return (lastDigit);
}
