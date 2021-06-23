#include "holberton.h"
#include <stdlib.h>
/**
 *print_last_digit - print last digit.
 *
 *Return: the value of the last digit.
 */

int print_last_digit(int n)
{
  int lastDigit;
  lastDigit = n%10  
  if(lastDigit<0)
  { 
   lastDigit =  abs(lastDigit);
  }
  
   return (lastDigit);
}
