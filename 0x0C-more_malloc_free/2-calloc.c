#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: some integer
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a)
	{
		for (x = 0; x < size * nmemb; x++)
		{
			a[x] = 0;
		}
		return (a);
	}
	return (NULL);
}
