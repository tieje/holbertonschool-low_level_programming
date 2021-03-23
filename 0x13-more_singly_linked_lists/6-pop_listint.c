#include "lists.h"
/**
 * pop_listint - delete the head node and return head node data
 * @head: head node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = (*head)->n;

	*head = temp->next;
	free(temp);
	return (data);
}
