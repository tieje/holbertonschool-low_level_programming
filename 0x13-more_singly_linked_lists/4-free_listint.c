#include "lists.h"
/**
 * free_listint - free a listint
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *node = head;

	while (node)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
