#include "holberton.h"

/**
 * print_square - prints a square boi
 * @size: size of square
 * Return: None
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (y = 0; y < size ; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
