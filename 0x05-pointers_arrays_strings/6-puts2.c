#include "holberton.h"

/**
 * puts2 - prints every ohter character
 * @str: a string
 * Return: None
 */

void puts2(char *str)
{
	int str_len;
	int x;

	for (str_len = 0; str[str_len] != 0; str_len++)
	{
		continue;
	}

	for (x = 0; x < str_len; x = x + 2)
	{
		_putchar(str[x]);
	}
	_putchar(10);
}
