#include "main.h"
/**
 * _strcmp - compares two strings s1 and s2
 * @s1: first string
 * @s2: second string
 * Return: 0(always success)
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' || *s2 != '\0')/*Not at the end of either string*/
	{
		if (*s1 != *s2)/*Comparing the strings*/
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (0);
}
