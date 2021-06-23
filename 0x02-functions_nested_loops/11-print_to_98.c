#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 -  all natural numbers from n to 98
 * @n: initial point
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
  for (;n<=98;n++)
  {
  printf("%d",n);
  if (n == 98)
  {
    break;
  }
  else
  {
  printf(", ");
  }
  }
  
  
  for (;n>=98;n--)
  {
  printf("%d",n);
  if (n == 98)
  {
    break;
  }
  else
  {
  printf(", ");
  }
  }
  
}
