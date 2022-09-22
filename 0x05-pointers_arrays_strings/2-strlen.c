#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: parameter to count characters in the string
 * Return: s the length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
