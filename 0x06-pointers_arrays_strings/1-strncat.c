#include "main.h"
/**
 * _strncat - concatenates at most n bytes from str1 to str2
 * @dest: String to be appended to
 * @src: String to append
 * @n: number of bytes of src to append
 * Return: dest (concatenated string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(src + j) != *(src + n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
