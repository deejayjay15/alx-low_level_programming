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
 * _strcpy - copies one string to another
 * @dest: destination string
 * @src: source string
 * Return: dest(Destination string)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = _strlen(src);
	i = 0;
	while (i <= j)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
