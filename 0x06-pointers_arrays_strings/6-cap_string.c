#include "main.h"
/**
 * cap_string - converts first byte of a string to uppercase
 *
 * @s: string to be converted
 *
 * Return: c(The string converted to uppercase)
 *
 */

char *cap_string(char *s)
{
	int i;/*Iterator*/

	i = 0;

	if (s[i] <= 'z' && s[i] >= 'a')
		s[i] = s[i] - 'a' + 'A';

	i++;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') &&
		    (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		          s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		     s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		     s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
		     || s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
