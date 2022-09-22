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
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temporary;

	i = 0;
	j = (_strlen(s) - 1);
	while (i < j)
	{
		temporary = s[i];
		s[i] = s[j];
		s[j] = temporary;
		i++, j--;
	}
}
