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
 * puts2 - prints even integers
 * @str: integer to be checked
 * Return: None
 */

void puts2(char *str)
{
	int ctr;

	for (ctr = 0; str[ctr] != '\0' && ctr < _strlen(str); ctr += 2)
	{
		_putchar(str[ctr]);
	}
	_putchar('\n');
}
