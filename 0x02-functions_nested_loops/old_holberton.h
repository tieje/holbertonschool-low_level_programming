#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}

void print_alphabet_x10(void)
{
	int y;

	for (y = 0; y <= 10; y++)
	{
		print_alphabet();
	}
}
/*
int _islower(int c)
{
	if (c )
}
*/
