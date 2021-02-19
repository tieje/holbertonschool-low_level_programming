#include "holberton.h"
/**
 * print_number - prints integer
 * @n: integer
 */

void print_number(int n)
{
	int x = 1;
	int i = n;

	if (n < 0)
	{
		i = -1 * i;
		_putchar('-');
	}
	while (n && i / x >= 10)
	{
		x = x * 10;
	}
	for (; x >= 10; x = x / 10)
	{
		_putchar(i / x + '0');
		i = i - (i / x) * x;
	}
	_putchar(i % 10 + '0');
}
