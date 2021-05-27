#include "holberton.h"

/**
 * _strncat - molecule by molecule
 * @dest: dest
 * @src: src
 * @n: n
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int srclen;
	int x;

	for (destlen = 0; dest[destlen] ; destlen++)
	{
		continue;
	}
	for (srclen = 0; src[srclen]; srclen++)
	{
		continue;
	}

	if (n <= srclen)
	{
		for (x = 0; x < n; x++)
		{
			dest[destlen] = src[x];
			destlen++;
		}
		dest[destlen] = '\0';
		return (dest);
	}
	for (x = 0; src[x] != 0; x++)
	{
		dest[destlen] = src[x];
		destlen++;
	}
	return (dest);
}
