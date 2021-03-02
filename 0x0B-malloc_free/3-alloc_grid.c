#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to 2 dimensional array of int
 * @width: width
 * @height: height
 * Return: 2d array of int
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(width * sizeof(int *));
	if (arr == NULL)
	{
		return (arr);
	}
	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));
		if (arr[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}
