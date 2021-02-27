#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the program's name
 * @argc: number of arguments
 * @argv: arguments in string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = argc; i > 0; i--)
	{
		printf("%s\n", argv[argc - i]);
	}
	return (0);
}
