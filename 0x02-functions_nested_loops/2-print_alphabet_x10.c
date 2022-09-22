#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: NULL. It is a void function
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		n = 97;

		while (n <= 122)
		{
			_putchar(n);
			n++;
		}

		_putchar('\n');
	}
}
