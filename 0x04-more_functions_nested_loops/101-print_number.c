#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: The number to be printed
 * Return: None(void function)
 */

void print_number(int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k = n;/*To convert n to a positive number*/
	double t = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			k = n * -1;
			_putchar('-');
		}

		while (t <= k)
			t *= 10;
		i = t / 10;

		while (i >= 1)
		{
			j = k / i;
			_putchar(j + '0');
			k = (k - (i * j));
			i /= 10;
		}
	}
}
