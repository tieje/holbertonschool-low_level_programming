#include "holberton.h"

/**
 * times_table - prints times table 0-9
 * Return: None
 */

void times_table(void)
{
	int x;
	int y;
	int prod;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			prod = x * y;
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar(prod + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((y + 1) * x < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar(10);
	}
}
