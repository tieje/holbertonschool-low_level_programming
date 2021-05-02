#include "lists.h"
/**
 * print_dlistint - prints elements in a dlistint
 * @h: head of d list
 * Return: size t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t iter = 0;
	const dlistint_t *node = h;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		iter++;
	}
	return (iter);
}
