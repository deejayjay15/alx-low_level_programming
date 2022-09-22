#include "main.h"
/**
 * *_strncpy - copies a string src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of src to copy
 * Return: dest(copy of string src)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;/*Destination check*/

	i = 0;
	while (i < n && *(src + i) != '\0')/*Are there enough bytes in source?*/
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';/*Null pointer b4 nth byte to loop*/
		i++;
	}

	return (dest);
}
