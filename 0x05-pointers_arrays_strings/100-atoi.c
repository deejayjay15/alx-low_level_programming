#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * index_digit - find index where a digit is first found in string
 * @s: string to search
 * Return: integer index where digit is first found
 */

int index_digit(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1); /* return -1 if no digits found */
}

/**
 * _sign - determine if integer is negative
 * @s: integer
 * Return: integer 1 or -1
 */
int _sign(char *s)
{
	int negatives;
	int i;
	int sign;

	sign = 1;
	i = 0;
	negatives = 0;
	while (i < (index_digit(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string to convert to integer
 * Return: digit(the integer)
 */

int _atoi(char *s)
{

	int idx_digit = (index_digit(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (index_digit(s));

	if (idx_digit < 0) /* if no digits, exit program */
		return (0);

	sign = _sign(s);

	while ((s[idx_digit] >= '0' && s[idx_digit] <= '9')
	       && (idx_digit <= _strlen(s))) /* count digits to print */
	{
		digits_to_print += 1;
		idx_digit++;
	}

	i = 1;
	while (i < digits_to_print) /* find powers of ten to multiply places */
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits_to_print); i++) /* calculate num */
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
