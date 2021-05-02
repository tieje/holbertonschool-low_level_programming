#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index in dlist
 * @h: head
 * @idx: index
 * @n: element n
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *h;
	unsigned int iter = 0;

	if (!h || new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx > 0)
	{
		while (iter != idx - 1 && current_node != NULL)
		{
			current_node = current_node->next;
			iter++;
		}
	}
	if (idx == 0)
	{
		new_node->next = current_node;
		new_node->prev = NULL;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	if (current_node == NULL)
		return (NULL);
	new_node->next = current_node->next;
	current_node->next = new_node;
	new_node->prev = current_node;
	return (new_node);
}
