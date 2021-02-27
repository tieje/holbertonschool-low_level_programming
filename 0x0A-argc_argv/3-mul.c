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
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
