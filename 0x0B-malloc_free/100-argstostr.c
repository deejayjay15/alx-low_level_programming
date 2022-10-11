#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i;/*Length variable*/

	i = 0;
	while (*s != '\0')
		i++, s++;

	return (i);
}

/**
 * argstostr - concatenates all arguments of my program
 * @ac: argument counter
 * @av: arguments 2D array
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i;/*Length variable*/
	int j;
	int k;
	int l;

	i = 0;
	if (ac == 0 || av == NULL) /* validate input */
		return (NULL);

	/* find length to malloc */
	for (j = 0; j < ac; j++)
	{
		i += _strlen(av[j]);
	}
	i += (ac + 1); /* add space for newlines and null terminator */

	/* allocate memory and free if error */
	s = malloc(i * sizeof(char));

	l = 0;
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	/* insert each arg into *str */
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < _strlen(av[j]); k++)
		{
			s[l++] = av[j][k];
		}
		s[l++] = '\n';
	}

	return (s);
}
