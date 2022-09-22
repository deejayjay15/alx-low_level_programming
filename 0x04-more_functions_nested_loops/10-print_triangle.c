#include "main.h"

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int i;/*height of the triangle*/
	int j;/*width of the triangle*/
	int k;/*When to draw the character*/

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
				_putchar(' ');

			for (k = 1; k <= i; k++)
				_putchar('#');

			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
