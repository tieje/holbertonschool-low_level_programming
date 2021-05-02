#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head
 * @index: index to delete
 * Return: 1 or -1 for success or failure, respectively
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int iter = 0;
	dlistint_t *delete_node;
	dlistint_t *prev_node = *head;
	dlistint_t *next_node;

	if (index > 0)
	{
		while (iter != index - 1 && prev_node != NULL)
		{
			prev_node = prev_node->next;
			iter++;
		}
	}
	if (prev_node == NULL)
		return (-1);
	if (index == 0)
	{
		next_node = prev_node->next;
		*head = next_node;
		free(prev_node);
		return (1);
	}
	delete_node = prev_node->next;
	next_node = delete_node->next;
    delete_node->next->prev = next_node;
	prev_node->next = next_node;
	free(delete_node);
	return (1);
}
