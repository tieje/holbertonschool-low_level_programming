#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - convert string to numbers
 * @s: thing
 * Return int
 */
int _atoi(char *s)
{
	int x = 0;
	int i = 0;
	int neg_count = 0;
	int intcopy = 0;

	while (s[x] < '0' || s[x] > '9')
	{
		x++;
	}
	i = x;
	while (s[x] >= '0' && s[x] <= '9')
	{
		intcopy = intcopy * 10 + s[x] - '0';
		x++;
	}
	for (; i >= 0; i--)
	{
		if (s[i] == '-')
		{
			neg_count++;
		}
	}
	if (neg_count % 2 == 1)
	{
		intcopy = -1 * intcopy;
	}
	return (intcopy);
}
