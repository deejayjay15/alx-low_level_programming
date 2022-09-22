#include "main.h"
/**
 * jack_bauer - print 24 hours of Jack
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	hours = 0;
	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');

			minutes++;
		}

		hours++;
	}
}
