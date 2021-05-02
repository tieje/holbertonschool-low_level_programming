#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head
 * @index: index to delete
 * Return: 1 or -1 for success or failure, respectively
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (!head)
		return (-1);
	for (node = *head; node && index; node = node->next)
		index--;
	if (!node || index > 0)
		return (-1);
	if (!node->prev)
	{
		if (node->next)
		{
			node->next->prev = NULL;
			*head = node->next;
		}
		*head = NULL;
	}
	else if (!node->next)
		node->prev->next = NULL;
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
