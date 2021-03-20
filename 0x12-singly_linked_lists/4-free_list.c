#include "lists.h"
/**
 * free_list - frees list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (node)
	{
		free(node->str);
		node = head->next;
		free(head);
		head = node;
	}
}
