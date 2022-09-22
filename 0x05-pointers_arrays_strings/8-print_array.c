#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers followed by a newline
 * @a: The array of integers
 * @n: number of elements of the array
 * Return: None
 */

void print_array(int *a, int n)
{
	int i;/*counter*/

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
