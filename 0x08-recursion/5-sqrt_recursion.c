#include "main.h"
/**
 * test_root - find square root of n, starting from the smallest possible, 0
 * @n: number
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int test_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (test_root(n, root + 1));
}

/**
 * _sqrt_recursion - computes natural squareroot of a number
 * @n: Number whose squareroot is to be calculated
 * Return: Squareroot of n
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (test_root(n, 0));
}
