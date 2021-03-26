#include "holberton.h"
/**
 * set_bit - set bit
 * @n: number
 * @index: index
 * Return 1 if it worked or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
