#include "main.h"

/**
 *  _isalpha - check the code.
 *
 * @c: Character to be checked
 *
 * Return: 1 if c is alphabet character, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	else
		return (0);
	_putchar('\n');
}
