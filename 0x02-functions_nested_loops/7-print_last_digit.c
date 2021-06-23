#inlcude "holberton.h"
/**
 *print_last_digit - print last digit.
 *
 *Return: the value of the last digit.
 */
int print_last_digit(int n)
{
  int abs;
  if(n<0)
  {
    abs = -1*n
  }
  int lastDigit = abs % 10;
  
    return (lastDigit);
}
