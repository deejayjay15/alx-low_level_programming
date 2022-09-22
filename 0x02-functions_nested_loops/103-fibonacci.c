#include <stdio.h>
/**
 * main - Entry point, print even fibonacci numbers below 4M
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int evens = 0;
	int x;
	int y;
	int sum = 1;

	x = 1;
	y = 1;

	while (y < 4000000)
	{
		sum = x + y;
		x = y;
		y = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			evens += sum;
	}
	printf("%d\n", evens);

	return (0);
}
