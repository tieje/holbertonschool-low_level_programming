#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: the separator
 * @n: number of integers passed to function
 * @...: list of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sep_flag = 0;

	if (!separator)
	{
		sep_flag = 1;
	}
	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pa, int));
		if (i < n - 1 && sep_flag == 0)
		{
			printf("%s", separator);
		}
	}
	va_end(pa);
	printf("\n");
}
