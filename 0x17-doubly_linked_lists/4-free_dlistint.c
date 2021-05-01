#include "lists.h"
/**
 * free_dlistint - free dlist node
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
