#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: array point
 * @size: size of array
 * @action: function  point
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
