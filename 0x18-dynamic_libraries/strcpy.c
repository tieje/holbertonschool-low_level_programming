#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: copies the string pointed to by dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int src_len;
	int x;

	for (src_len = 0; src[src_len] != 0; src_len++)
	{
		continue;
	}

	for (x = 0; x <= src_len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
