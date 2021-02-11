#include "holberton.h"

/**
 * print_line - we be printin
 * @n: number of time to print
 * Return: void
 */

void print_line(int n)
{
	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar(10);
	}
}
