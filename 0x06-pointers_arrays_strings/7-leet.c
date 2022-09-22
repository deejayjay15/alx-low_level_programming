#include "main.h"
/**
 * leet - encodes characters to LEET(1337)
 * @s: Character to be converted
 * Return: c(Leeted char)
 */

char *leet(char *s)
{
	int orig[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int con[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;/*cycle through leet code*/
	int j;/*cycle through string*/

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; orig[i] != '\0'; i++)
		{
			if (s[j] == orig[i])
				s[j] = con[i];
		}
	}
	return (s);
}
