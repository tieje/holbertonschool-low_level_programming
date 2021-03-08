#include <stdlib.h>
#include "holberton.h"

/**
 * getlen - gets length
 * @s: string
 * Return: length
 */
int getlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (checkdigit(s[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (i);
}

/**
 * checkdigit - checks for digit
 * @c: character
 * Return: some bool
 */
bool checkdigit(char *c)
{
	bool a = false;

	if (c >= '0' || c <= '9')
	{
		a = true;
	}
	return (a);
}

/**
 * print_product - multiplies
 * @s1len: length of s1
 * @s2len: lenght of s2
 * @s3len: length of both s1 and s2
 * s1: string integer one
 * s2: string integer two
 */
void print_product(int s1len, int s2len, int s3len, char *s1, char *s2)
{
	int i = s2len;
	int j = s3len;
	int k = s1len;
	int zerosbot = 1;
	int zeros_top = 1;
	int excess = 0;
	int strtoint;
	int s1int;
	int s2int;
	int s3int;
	int res = 0;
	int onesdigit;
	int tensdigit = 0;

	while (k >= 0)
	{
		for (i = s2len; i >= 0; i--)
		{
			s1int = s1[s1len] - '0';
			s2int = s2[s2len] - '0';
			s3int = s1int * s2int;
			onesdigit = s3int % 10;
			tensdigit = s3int / 10;
			res = res + onesdigit + tensdigit
			res = res + zeros_top * s3int;
			zeros_top = zeros_top * 10;
		}
		zeros_top = 1;
		zerosbot = zerosbot * 10;
		zeros_top = zeros_top * zerosbot;
		k--;
	}
	printf("%d", res);
	_putchar(10);
}
/**
 * main - print multiplication
 * @argc - number of arguments
 * @argv - actual arguments
 */
void main(argc, argv)
{
	int i;
	int j;
	int k;

	i = getlen(argv[1]);
	j = getlen(argv[2]);
	k = i + j;
	print_product(i, j, k, arg[1], arg[2]);
}
