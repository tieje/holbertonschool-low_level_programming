#include "lists.h"
/**
 * checkbounds - checks bounds of dlinked list
 * @h: head
 * @idx: index
 * Return: 0 or 1
 */
int checkbounds(dlistint_t **h, unsigned int idx)
{
	dlistint_t *node = *h;
	unsigned int counter = 0;

	while (node)
	{
		node = node->next;
		counter++;
	}
	if (idx <= counter)
		return (0);
	return (1);
}
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
	unsigned int bounds = 0;

	if (checkbounds(h, idx) == 1)
		return (NULL);
	if (!h || new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current_node != NULL && bounds < idx)
	{
		current_node = current_node->next;
		bounds++;
	}
	if (current_node == NULL)
		return (add_dnodeint_end(h, n));
	new_node->next = current_node;
	new_node->prev = current_node->prev;
	current_node->prev->next = new_node;
	current_node->prev = new_node;
	return (new_node);
}
