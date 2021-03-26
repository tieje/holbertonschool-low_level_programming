#include "holberton.h"
/**
 * get_bit - gets bit at index
 * @n: number
 * @index: index
 * Return: zero, 1, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = (n >> index) & 1;

	if (x == 0 || x == 1)
	{
		return (x);
	}
	return (-1);
}
