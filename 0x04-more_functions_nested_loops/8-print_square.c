#include "main.h"
/**
 * print_square - prints '#' in square
 * @size: parameter for size
 * Return: none
 */

void print_square(int size)
{
	int i;/*Row*/
	int j;/*Column*/

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
