#include "holberton.h"

/**
 * ret_strlen - return strlen
 * @a: string to lenth
 * Return: string length
 */

int ret_strlen(char *a)
{
	int counter = 0;

	while (*(a + counter))
	{
		counter++;
	}
	return (counter - 1);
}

/**
 * print_rev - print reverse string
 * @s: stirng to length
 * Return: None
 */

void print_rev(char *s)
{
	int s_len = ret_strlen(s);

	while (*(s + s_len))
	{
		_putchar(*(s + s_len));
		s_len--;
	}
	_putchar(10);
}
