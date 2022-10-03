#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of argument numbers
 *
 * @argc: argument counter
 * @argv: numbers to multiply
 *
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{

	int a, b, c;/*variables to store converted arguments*/

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* mulitply two arguments passed*/
	c = a * b;
	printf("%d\n", c);
	return (0);
}
