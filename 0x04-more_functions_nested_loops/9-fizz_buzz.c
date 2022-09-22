#include <stdio.h>
/**
 * main - prints 1 - 100 with multiples of 3 having fizz
 * and multiples of 5 buzz and multiples of both FizzBuzz
 *
 * Return: always 0(Success)
 */

int main(void)
{
	int i;/*counter*/

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
