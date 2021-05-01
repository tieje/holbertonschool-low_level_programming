#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: head
 * @n: new integer
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (new_node->n != 0 && !new_node->n)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current_node->next)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);

}
