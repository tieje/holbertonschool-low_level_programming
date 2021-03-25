#include "holberton.h"
/**
 * print_binary - prints binary of a number
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
