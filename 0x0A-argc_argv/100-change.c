#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - print min number of coins
 * @argc: integer of argument
 * @argv: array of inputs
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (atoi(argv[argc - 1]))
	{
		y = atoi(argv[argc - 1]);
		x = y / 25;
		y = y - ((y / 25) * 25);
		x += y / 10;
		y = y - ((y / 10) * 10);
		x += y / 5;
		y = y - ((y / 5) * 5);
		x += y;
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
