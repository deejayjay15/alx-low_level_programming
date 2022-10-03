#include <stdio.h>
/**
 * main - prints the number of argments passed to it
 *
 * @argc: number of arguments passed to main
 * @argv: arguments passed to main
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
