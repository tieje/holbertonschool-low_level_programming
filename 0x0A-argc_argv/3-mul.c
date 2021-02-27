#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the program's name
 * @argc: number of arguments
 * @argv: arguments in string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 2)
	{
		printf("Error\n");
	}
	printf("%d\n", i);
	return (0);
}
