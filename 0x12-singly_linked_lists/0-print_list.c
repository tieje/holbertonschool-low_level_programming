#include "lists.h"

/**
 * print_list - prints list
 * @h: singly linked list head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	char *null_data = "[0] (nil)";
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("%s\n", null_data);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
