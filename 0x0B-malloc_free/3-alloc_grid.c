#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to two dimensional array of integers
 *
 * @width: colums
 * @height: rows
 *
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int row;
	int i;
	int col;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof(int) * width);
		if (array[row] == NULL)
		{
			i = 0;
			while (i < row)
			{
				free(array[i]);
				i++;
			}
			free(array);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			array[row][col] = 0;
		}
	}
	return (array);
}
