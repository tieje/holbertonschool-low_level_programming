#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints result of operation followed by a new line
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
