#include "lists.h"
/**
 * add_node_end - adds node to the end
 * @head: head
 * @str: stringg
 * Return: returns new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;
	size_t len = 0;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	while (new_node->str[len])
		len++;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
