#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array with specific string
 *
 * @size: lenght of array
 * @c: string
 *
 * Return: pointer to string
 */
char *create_array(unsigned int size, char c)
{
	/*Counter*/
	unsigned int i;
	/*malloc pointer*/
	char *str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	str[i] = '\0';/*Adds null string at end of array*/

	return (str);
}
