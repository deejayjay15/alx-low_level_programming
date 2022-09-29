#include "main.h"
/**
 * comp - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int comp(char *head, char *tail)
{

	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (comp(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - Checks whether a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if s is a string 0 if not
 */
int is_palindrome(char *s)
{
	/*Get string length*/
	int i;

	i = _strlen(s);

	return (comp(s, (s + i - 1)));
}
