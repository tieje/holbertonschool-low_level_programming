#include "holberton.h"

/**
 * print_line - we be printin
 * @n: number of time to print _
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar(10);
	}
	else
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar(10);
}
