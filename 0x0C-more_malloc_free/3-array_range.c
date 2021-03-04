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

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min) * sizeof(int) + 1);
	if (arr != NULL)
	{
		for (arr_iter = 0; arr_iter <= max - min; arr_iter++)
		{
			arr[arr_iter] = min;
			min++;
		}
		return (arr);
	}
	return (NULL);
}
