#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: one diagonal
 * @size: another diagonal
 */
void print_diagsums(int *a, int size)
{
	int x;
	int res2 = 0;
	int res1 = 0;

	for (x = 0; x <= size * size; x += size + 1)
	{
		res1 += a[x];
	}
	for (x = 0; x <= size * size; x+)
	{
		res2 += 
	}
	printf("%d, %d\n", res1, res2);
}
