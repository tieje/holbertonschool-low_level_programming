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
	const list_t *pointer = h;

	if (!h)
		return (0);
	while (pointer)
	{
		if (pointer->str == NULL)
		{
			printf("%s\n", null_data);
		}
		else
		{
			printf("[%d] %s\n", pointer->len, pointer->str);
		}
		counter++;
		pointer = pointer->next;
	}
	return (counter);
}
