#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: stting to be printed in reverse
 * Return: None
 */

void print_rev(char *s)
{
	int length;/*Stores length of sting*/
	int i;/*counter to print string*/

	/*Iterate to last character in string*/
	length = 0;
	while (*s != '\0')
	{
		length++;
		++s;
	}

	s--;/*Right before the null character*/

	i = length;
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
