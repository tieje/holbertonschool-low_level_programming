#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: some integer
 * Return: 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
		n--;
	}
	putchar('9');
	putchar('8');
	putchar(10);
}
