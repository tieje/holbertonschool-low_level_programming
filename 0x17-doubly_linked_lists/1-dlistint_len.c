#include "lists.h"
/**
 * dlistint_len - number of elements in d list
 * @h: head
 * Return: size t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t counter = 0;

	while (node)
	{
		counter++;
		node = node->next;
	}
	return (counter);
}
