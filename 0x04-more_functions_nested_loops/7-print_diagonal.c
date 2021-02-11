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

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (nl = 1; nl <= n; nl++)
		{
			ws = 1;
			while (ws < nl)
			{
				_putchar(' ');
				ws++;
			}
			_putchar('\\');
			_putchar(10);
		}
	}
}
