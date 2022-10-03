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
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
