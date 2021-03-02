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
	for (x = 0; x < width; x++)
	{
		arr[x] = malloc(height * sizeof(int));
		if (arr[x] == NULL)
		{
			for (x = 0; x < height; x++)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
		for (y = 0; y < height; y++)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}
