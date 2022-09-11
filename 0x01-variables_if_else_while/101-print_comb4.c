#include <stdio.h>
#include <stdlib.h>
/**
 *  main - Entry code
 *  Description: prints all possible combination of 2 digits
 *  INTSTUCTIONS;
 *  the two digits must be different,
 *  01 and 10 are considered the same combination of the two digits 0 and 1
 *  Print only the smallest combination of two digits
 *  Numbers should be printed in ascending order, with two digits
 *  You can only use the putchar function --
 *	(every other function (printf, puts, etc…) is forbidden)
 *  You can only use putchar five times maximum in your code
 *  You are not allowed to use any variable of type char
 *  Return: 0
 */
int main(void)
{
	int start = 0;
	int end = 10;
	int c;
	int d;

	for ( ; start < end; start++)
	{
		c = 0;
		for ( ; c < end; c++)
		{
			d = 0;
			for ( ; d < end; d++)
			{
				if (start != c && c != d && start < c && c < d)
				{
					putchar(48 + start);
					putchar(48 + c);
					putchar(48 + d);
					if (d + c + start != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
