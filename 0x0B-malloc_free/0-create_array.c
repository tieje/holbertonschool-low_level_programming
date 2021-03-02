#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: an int
 * @c: a character
 * Return: character in array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size <= 0)
	{
		return (NULL);
	}
	else if (malloc(size * sizeof(char)))
	{
		a = malloc(size * sizeof(char) + 1);
		for (i = 0; i <= size; i++)
		{
			a[i] = c;
		}
		i++;
		a[i] = '\0';
		return (a);
	}
	return (NULL);
}
