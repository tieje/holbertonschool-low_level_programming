#include "holberton.h"

/**
 * print_diagonal - printing diagonal lines baby
 * @n: print diagonally
 * Return: void
 */

void print_diagonal(int n)
{
	int ws;
	int nl;

	for (nl = 1; nl <= n; nl++)
	{
		ws = 0;
		while (ws < nl)
		{
			_putchar(' ');
			ws++;
		}
		_putchar('\\');
		_putchar(10);
	}

	if (n <= 0)
	{
		_putchar(10);
	}
}
