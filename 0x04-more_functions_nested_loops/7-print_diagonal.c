#include "main.h"

/**
 * print_diagonal - prints the diagonal character on nth position
 * @n: Parameter for the \
 * Return: none
 */

void print_diagonal(int n)
{
	int s;/*variable for the '/'*/
	int i;/*Variable for the spaces before the '/'*/

	if (n > 0)
	{
		for (s = 1; s <= n; s++)
		{
			for (i = 1; i < s; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
