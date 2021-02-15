#include "holberton.h"

/**
 * swap_int - betty don't kill me
 * @a: integer
 * @b: another one
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
