#include "holberton.h"
/**
 * _puts_recursion - prints a string recursively
 * @s: input string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar(10);
	}
}
