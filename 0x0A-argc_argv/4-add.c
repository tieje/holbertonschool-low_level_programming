#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints the program's name
 * @argc: number of arguments
 * @argv: arguments in string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int temp;
	int res = 0;

	for (x = 1; x < argc; x++)
	{
		if (atoi(argv[x]))
		{
			temp = atoi(argv[x]);
			res += temp;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
