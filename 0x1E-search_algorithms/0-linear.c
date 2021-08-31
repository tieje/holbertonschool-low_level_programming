#include "search_algos.h"
/**
 * linear_search - perform binary search on an array
 * @array: array
 * @size: size of the array
 * @value: value we're looking for
 * Return: If Integer found, return index of value in the array. -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
