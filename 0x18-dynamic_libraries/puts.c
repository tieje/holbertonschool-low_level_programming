#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a string
 * Return: 0
 */

void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter))
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar(10);
}
