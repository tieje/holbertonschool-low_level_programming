#include <stdlib.h>
/**
 * free_grid - free a 2D grid created by alloc_grid
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
