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
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (a);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
