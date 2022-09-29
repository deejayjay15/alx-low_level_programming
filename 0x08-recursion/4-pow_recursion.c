#include "main.h"
/**
 * _pow_recursion - computes x raied to power y
 * @x: Value of the integer
 * @y: Power to raise x to
 * Return: The value of the power of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
