#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;/*counter*/
	int j = 50;/*How many of the sequence*/
	long x = 1;
	long y = 2;

	for (i = 1; i <= (j / 2); i++)
	{
		if (i < (j / 2))
		{
			printf("%li, %li, ", x, y);
			x += y;
			y += x;
		}

		else
		{
			printf("%li, %li", x, y);
			x += y;
			y += x;
		}
	}
	if (j % 2 == 1)
	{
		printf("%li", x);
	}

	printf("\n");

	return (0);
}
