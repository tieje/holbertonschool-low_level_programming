#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: some integer
 * @size: size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*unsigned int x;*/
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
