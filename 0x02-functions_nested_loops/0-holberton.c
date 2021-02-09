#include "holberton.h"
/**
 * main - Betty don't kill me
 * Return: 0
 */

int main(void)
{
	/* char *school means that *school points to the character 'H'*/
        char *school = "Holberton\n";
	int x;

	/* school would return the address. */
	for (x = 0; x < 10; x++)
	{
		_putchar(*(school + x));
	}
	return (0);
}
