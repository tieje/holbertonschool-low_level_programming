#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: head
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (node)
	{
		result = result + node->n;
		node = node->next;
	}
	return (result);
}
