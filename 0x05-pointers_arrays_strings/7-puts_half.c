#include "holberton.h"

/**
 * puts_half - prints half of the string
 * @str: a string
 * Return: void
 */

void puts_half(char *str)
{
	int str_len = 0;
	int x;

	for (str_len = 0; str[str_len] != 0; str_len++)
	{
		continue;
	}
	/*
	 *if (str_len % 2 == 0)
	 *{
	*/
	for (x = str_len / 2; x < str_len; x++)
	{
		_putchar(str[x]);
	}
	/*
	 *else
	*{
	*	for (x = (str_len - 1) / 2; x < str_len; x++)
	*	{
	*		_putchar(str[x]);
	*	}
	*}
*/
	_putchar(10);
}
