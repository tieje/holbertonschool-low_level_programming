#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: head
 * @n: integer value of new node
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node = *head;

	if (new_node == NULL)
	{
		printf("false new_node");
		return (NULL);
	}
	new_node->n = n;
	if (!new_node->n)
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
