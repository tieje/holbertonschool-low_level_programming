#include "holberton.h"
/**
 * get_bit - gets bit at index
 * @n: number
 * @index: index
 * Return: zero, 1, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
