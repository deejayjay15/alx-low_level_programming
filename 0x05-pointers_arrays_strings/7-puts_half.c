#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 * Return: none
 */

void puts_half(char *str)
{
	int i;
	int j;

	j = _strlen(str);
	if ((j % 2) == 0)
	{
		i = (j / 2);
	}

	else
	{
		i = ((j + 1) / 2);
	}

	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
