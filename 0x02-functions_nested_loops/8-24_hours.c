#include "holberton.h"

/**
 * jack_bauer - print every minute of hte day starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int hh;
	int mm;

	for (hh = 0; hh <= 23; hh++)
	{
		for (mm = 0; mm <= 59; mm++)
		{
			if (hh > 10)
			{
				_putchar((hh / 10) + '0');
				_putchar((hh % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(hh + '0');
			}
			_putchar(':');
			if (mm > 10)
			{
				_putchar((mm / 10) + '0');
				_putchar((mm % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(mm + '0');
			}
			_putchar(10);
		}
	}
}
