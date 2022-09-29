#include "main.h"
/**
 * match_sub - check if a substring after wildcard matches s1
 * @s1: String one
 * @s2: String two
 * @wildindex: placeholder for position right afterwildcard
 * Return: 1 if matched, 0 otherwise
 */

int match_sub(char *s1, char *s2, char *wildindex)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (match_sub(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (match_sub(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (match_sub(s1 + 1, s2 + 1, wildindex));
	else
		return (match_sub(s1 + 1, wildindex, wildindex));
}

/**
 * wildcmp - compare if string with wildcard mattches
 * @s1: String one
 * @s2: String two
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (match_sub(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
