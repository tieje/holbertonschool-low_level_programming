#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: head
 * @idx: index
 * @n: integer value
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node = *head;
	unsigned int iter = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
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
		*head = new_node;
		return (new_node);
	}
	if (current_node == NULL)
		return (NULL);
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
