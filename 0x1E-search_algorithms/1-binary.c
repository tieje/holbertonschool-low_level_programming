#include "search_algos.h"
/**
* binary_search - search for value using binary search.
* @array: array of integers.
* @size: size of array.
* @value: value of integer to search for.
* Return: index where value was found.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t x, low = 0, top = size - 1, mid = 0;

	if (array)
		while (low <= top)
		{
			mid = (low + top) / 2;

			/*print array*/
			printf("Searching in array: ");
			for (x = low; x <= top; x++)
				x != top ? printf("%d, ", array[x]) : printf("%d", array[x]);
			printf("\n");
			if (array[mid] < value)
				low = mid + 1;
			else if (array[mid] > value)
				top = mid - 1;
			else
				return (mid);
		}
	return (-1);
}
