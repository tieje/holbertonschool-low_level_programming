#include "holberton.h"
/**
 * flip_bits - number of bits needed to flip to get to next number
 * @n: number
 * @m: destination number
 * Return: bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;

	for (m = 0; n != 0; n >>= 1)
		m += n & 1;

	return (m);
}
