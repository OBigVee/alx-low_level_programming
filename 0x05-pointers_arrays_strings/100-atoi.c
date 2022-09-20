#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _atoi - function converts a string to an int
  * the num in the string can be preceeded by an
  * _ infinite number of characters
  * You need to take into account all the - and +
  * _ signs before the number.
  * if there are no numbers in the string, the function
  * _ must return 0
  * you are allowed to use long
  * you are not allowed to declare new variables of type
  * _ array
  * you are not allowed to hard-code special values
  * we will use the -fsanitize=signed-integer-overflow
  * _ gcc flag to compile your code.
  * @s: string to be converted to int
  * Return: int
  */
int _atoi(char *s)
{
	return (atoi(s));
}
