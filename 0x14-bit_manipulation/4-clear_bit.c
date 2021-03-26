#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 9 at given index
 * @n: number
 * @index: index
 * Return: something
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
