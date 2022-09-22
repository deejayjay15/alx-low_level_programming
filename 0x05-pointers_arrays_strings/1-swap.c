#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first value
 * @b: second value to be swapped
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
