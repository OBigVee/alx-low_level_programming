#include <stdio.h>
#include <stdlib.h>
/**
 *  main - Entry code
 *  Description: prints all possible different combinations of three digits
 *  INTSTUCTIONS;
 *  Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the--
 *        three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digitsYou can--
 *        only use the putchar function (every other function--
 *        (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
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
