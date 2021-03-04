#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a != NULL)
	{
		return (a);
	}
	exit(98);
}
