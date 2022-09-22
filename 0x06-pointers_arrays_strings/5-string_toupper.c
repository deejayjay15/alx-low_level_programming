#include "main.h"
/**
 * string_toupper - converts a string to uppercase
 *
 * @s: string to be converted
 *
 * Return: c(The string converted to uppercase)
 *
 */

char *string_toupper(char *s)
{
	int i;/*Iterator*/

	i = 0;
	while (*(s + i) != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] - 'a' + 'A';

		i++;
	}

	return (s);
}
