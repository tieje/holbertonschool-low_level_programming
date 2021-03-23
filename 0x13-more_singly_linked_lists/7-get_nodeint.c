#include "lists.h"
/**
 * get_nodeint_at_index - returns node at index
 * @head: head
 * @index: index
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	listint_t *current_node = head;

	while (iter != index && current_node != NULL)
	{
		current_node = current_node->next;
		iter++;
	}
	if (iter == index)
		return (current_node);
	return (NULL);
}
