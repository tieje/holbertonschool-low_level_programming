#include "lists.h"
/**
 * free_listint2 - free a list int
 * @head: head double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;

	while (node)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
