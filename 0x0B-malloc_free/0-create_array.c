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
	char *a = malloc(sizeof(c));

	if (size <= 0)
	{
		return (NULL);
	}
	return (a);
}
