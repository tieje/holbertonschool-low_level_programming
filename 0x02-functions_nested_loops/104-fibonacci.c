#include <stdio.h>

/**
 * main - betty don't kill me
 * Return: first 98 fibonacci a la pisa
 */

int main(void)
{
	long long int oldx = 0;
	long long int oldy = 1;
	long long int x = 0;
	int counter = 0;

	do
	{
		printf("%lld", x);
		x = oldx + oldy;
		oldx = oldy;
		oldy = x;
		putchar(',');
		putchar(' ');
		counter++;
	} while(counter < 98);
	putchar(10);
	return (0);
}
