#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a grid of a 2D array
 * @grid: 2D array
 * @height: rows number
 */
void free_grid(int **grid, int height)
{
	int i;/*COunter for the row*/

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
