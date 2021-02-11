#include "holberton.h"

/**
 * print_numbers - it prints numbers
 * Return: 0
 */

void print_numbers(void)
{
	int x = '0';

	for ( ; x <= '9' ; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
