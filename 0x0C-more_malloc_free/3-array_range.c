#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int arr_iter = 0;
	int *arr;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (arr_iter = 0; arr_iter < size; arr_iter++)
	{
		arr[arr_iter] = min;
		min++;
	}
	return (arr);
}
