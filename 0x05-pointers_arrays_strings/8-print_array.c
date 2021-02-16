#include <stdio.h>

/**
 * print_array - prints array numbers
 * @a: array of integers
 * @n: number of elements to print from array
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x == n - 1)
		{
			continue;
		}
		else
		{
			printf(", ");
		}
	}
	putchar(10);
}
