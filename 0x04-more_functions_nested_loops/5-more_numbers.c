#include "main.h"

/**
 * more_numbers - prints 10 rows of 1 - 14
 *
 * Return: none
 */

void more_numbers(void)
{
	int i;/*Rows*/
	int n;/*Numbers*/

	i = 0;
	while (i <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			if ((n / 10 > 0))
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		i++;
		_putchar('\n');
	}
}
