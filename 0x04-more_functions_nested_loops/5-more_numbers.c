#include "holberton.h"

/**
 * print_most_numbers - it prints numbers
 * Return: 0
 */

void print_most_numbers(void)
{
	int x = 0;
	int y = 0;

	for ( ; y <= 10; y++)
	{
		for ( ; x <= 14 ; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
	}
	_putchar(10);
}
