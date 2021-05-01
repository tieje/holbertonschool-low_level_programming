#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of linked list
 * @head: head
 * @index: index
 * Return: address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	dlistint_t *current_node = head;

	while (iter != index && current_node != NULL)
	{
		current_node = current_node->next;
		iter++;
	}
	if (iter == index)
		return (current_node);
	return (NULL);
}
