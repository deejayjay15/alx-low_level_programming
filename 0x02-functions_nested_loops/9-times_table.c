#include "main.h"
/**
 * times_table - prints out the 9 times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;/*Variable for the row*/
	int j;/*Variable for the column*/
	int x;/*Variable for the product*/

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			x = i * j;

			if (j == 0)
			{
				_putchar('0' + x);
			}

			else if (x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}

			else if (x > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (x / 10));
				_putchar('0' + (x % 10));
			}

			j++;
		}
		i++;
		_putchar('\n');
	}
}
