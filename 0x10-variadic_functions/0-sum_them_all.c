#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of a all its parameters
 * @n: number of parameters I guess
 * @...: parameters
 * Return: some integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum;

	va_start(pa, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pa, int);
	}
	va_end(pa);
	return (sum);
}
