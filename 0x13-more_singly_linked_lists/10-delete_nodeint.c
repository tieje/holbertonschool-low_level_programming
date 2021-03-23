#include "lists.h"
/**
 * delete_nodeint_at_index - delete at index
 * @head: head
 * @index: index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int iter = 0;
	listint_t *delete_node;
	listint_t *prev_node = *head;
	listint_t *next_node;

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
	prev_node->next = next_node;
	free(delete_node);
	return (1);
}
