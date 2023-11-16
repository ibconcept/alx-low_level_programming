#include <stdio.h>
#include "lists.h"

/**
 * print_list - Outputs all elements of a singly linked list.
 * @h: Pointer to the list_t list for output.
 *
 * Return: The count of nodes that were output.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
