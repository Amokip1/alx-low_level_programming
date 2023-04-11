#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimentional grid
 * @grid: multidimensional array of int
 * @height: height of a grid
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
	free(grid[a]);
	}
	free(grid)
}
