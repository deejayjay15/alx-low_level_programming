#include "main.h"
/**
 * _memcpy - copies n bytes of src to dest
 *
 * @dest: Destination copy
 * @src: Source of the copy
 * @n: Number of bytes to be copied
 *
 * Return: pointer to dest, copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;/*Counter*/

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
