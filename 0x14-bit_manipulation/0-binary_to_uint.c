#include "holberton.h"

/**
 * _pow - power
 * @a: integer to pow
 * @b: exponent
 * Return: unsigned int final integer
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int res = 1;

	if (b == 0)
	{
		return (1);
	}
	for (i = 1; i <= b; i++)
	{
		res = res * a;
	}
	return (res);
}

/**
 * binary_to_uint - binary to unsigned int
 * @b: the string of 0 and 1 characters
 * Return: unsigned int integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int b_len;
	unsigned int iter;
	unsigned int result = 0;
	unsigned int power;

	if (b == NULL)
		return (0);
	for (b_len = 0; b[b_len]; b_len++)
		continue;
	power = b_len - 1;
	for (iter = 0; iter < b_len; iter++)
	{
		if (b[iter] == '1')
		{
			result = result + _pow(2, power);
		}
		else if (b[iter] != '0')
		{
			return (0);
		}
		power--;
	}
	return (result);
}
