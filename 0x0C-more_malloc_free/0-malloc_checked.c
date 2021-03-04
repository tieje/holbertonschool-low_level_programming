#include <stdlib.h>
/**
 * malloc_check - allocates memory using malloc
 * @b: amount of memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) != NULL)
	{
		return (malloc(b));
	}
	exit(98);
}
