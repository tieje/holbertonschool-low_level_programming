#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: head of linked list
 * Return: number of elements:
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t counter = 0;

	while (node)
	{
		counter++;
		node = node->next;
	}
	return (counter);
}
