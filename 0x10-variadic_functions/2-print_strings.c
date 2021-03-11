#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s", va_arg(pa, char *));
		if (sep_flag == 0 && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(pa);
	printf("\n");
}
