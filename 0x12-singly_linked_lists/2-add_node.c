#include "lists.h"
/**
 * add_node - adds a node
 * @head: head
 * @str: string of node
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t len = 0;

	if (!head)
		return (NULL);
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (new_node->str[len])
		len++;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
