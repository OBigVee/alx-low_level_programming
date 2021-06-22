#include <string.h>
#include"holberton.h"

/*
 * main - Entry
 * return - 0
 * */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int idx = 0;
	while (idx < (int) strlen(alphabet))
			{
			_putchar(alphabet[idx]);
			idx++;

			}
	_putchar('\n');
	return(0);
}
