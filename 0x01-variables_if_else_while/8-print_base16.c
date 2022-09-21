#include <stdio.h>
/**
 * main - Entry Point, Numbers base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
