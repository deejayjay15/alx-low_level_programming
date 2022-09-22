#include "main.h"

/**
 * print_line - prints __ ending with a new line
 * @n: parameter to be tested
 */

void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
