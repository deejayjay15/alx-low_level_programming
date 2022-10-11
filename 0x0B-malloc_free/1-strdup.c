#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string give for parameter
 *
 * @str: string to copy
 *
 * Return: s pointer to string copy
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	c = malloc(sizeof(char) * i + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		c[j] = str[j];
	}
	c[j] = '\0';

	return (c);
}
