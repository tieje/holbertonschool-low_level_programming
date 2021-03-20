#include "lists.h"
/**
 * list_len - number of elements in linked list
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while(h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
