#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head
 * @index: index to delete
 * Return: 1 or -1 for success or failure, respectively
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_node;

	if (!head)
		return (-1);
	for (new_node = *head; new_node && index; new_node = new_node->next)
		index--;
	if (!new_node || index > 0)
		return (-1);
	if (!new_node->prev)
	{
		if (new_node->next)
		{
			new_node->next->prev = NULL;
			*head = new_node->next;
		}
		*head = NULL;
	}
	else if (!new_node->next)
	{
		new_node->prev->next = NULL;
	}
	else
	{
		new_node->prev->next = new_node->next;
		new_node->next->prev = new_node->prev;
	}
	free(new_node);
	return(1);
}
