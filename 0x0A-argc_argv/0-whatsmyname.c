#include "stdio.h"
/**
 * main - prints the name of the function
 *
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0(Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
