#include "main.h"
/**
 * primnum - recursively divide by higher divisor
 * @n: Number to be checked
 * @div: Divisor
 * Return: 1 if prime, recursive function call
 */

int primnum(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (primnum(n, div + 1));
}

/**
 * is_prime_number - checks whether the integer is prime
 * @n: integer to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (primnum(n, 3));
}
