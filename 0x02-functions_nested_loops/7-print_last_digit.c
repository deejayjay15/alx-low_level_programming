#include "main.h"
/**
 * print_last_digit - returns last digit of an integer
 * @i: integer to be checked
 * Return: n- last digit of integer i
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (n < 0)
	{
		_putchar('0' + (-n));
		return (-n);
	}

	else
	{
		_putchar('0' + n);
		return (n);
	}
}
