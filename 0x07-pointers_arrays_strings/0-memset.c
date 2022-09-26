#include "main.h"
/**
 * _memset - fills the first n bytes of memory area pointed to by s with b
 *
 * @s: memory area to be filled
 * @b: constant bytes to fill up the memory spaces
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = n;/*Size*/
	int j;/*Counter*/

	if (i > 0)
	{
		for (j = 0; j < i; j++)
			s[j] = b;
	}

	return (s);
}
