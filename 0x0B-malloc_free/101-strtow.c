#include "main.h"
#include <stdlib.h>


/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int i;/*index*/
	int j;/*length*/

	i = 0;
	j = 0;
	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}

	return (j);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int i;/*index*/
	int j;/*length*/
	int k;/*Words*/

	i = 0;
	j = 0;
	k = 0;
	for (i = 0; *(str + i); i++)
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(str + i) != ' ')
		{
			k++;
			i += word_len(str + i);
		}
	}

	return (k);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
