#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using mlloc
 * @nmemb: The number of array member elements.
 * @size: The byte size of each array element.
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *f;/*Filler*/
	unsigned int i;/*Index*/

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	f = mem;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (mem);
}
