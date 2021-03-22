#include "lists.h"
/**
 * print_listint - prints all elements in listint_t list
 * @h: linked list header
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t counter = 0;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		counter++;
	}
	return (counter);
}
