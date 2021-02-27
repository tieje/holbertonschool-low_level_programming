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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
