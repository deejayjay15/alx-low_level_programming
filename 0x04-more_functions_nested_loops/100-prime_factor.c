#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long number = 612852475143;/*Variable for the large number*/
	unsigned long x = 2;/*divisor to check for the largest prime*/

	while (x < number)/*Ensuring the factor does not exceed the number*/
	{
		if (number % x == 0)
		{
			number /= x;/*division to get next factor*/
			x = 2;/**/
		}
		else
		{
			x++;/*Increasing value to get to next divisor*/
		}
	}
	printf("%lu\n", number);
	return (0);
}
