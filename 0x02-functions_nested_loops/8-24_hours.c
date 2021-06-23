#include "holberton.h"
/**
 * jack_bauer - prints a 24 hour timer starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar(':');
			_putchar(minutes / 10 + 48);
			_putchar(minutes % 10 + 48);
			_putchar('\n');
		}
	}
}
