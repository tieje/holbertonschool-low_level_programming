#include "lists.h"
/**
 * sum_dlistint - sum the list elements
 * @head: head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (node)
	{
		result = result + node->n;
		node = node->next;
	}
	return (result);
}
