#include <stdlib.h>
/**
 * free_grid - free a 2D grid created by alloc_grid
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int x;
	int z;

	for (z = 0; grid[0]; z++)
	{}
	for (x = 0; x <= height; x++)
	{
		free(grid[x]);
	}
}
