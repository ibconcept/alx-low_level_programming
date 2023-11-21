#include "lists.h"

/**
 * add_nodeint_end - Function to append a node at the end of a linked list.
 * @head: Double pointer to the first element in the list.
 * @n: Data to be inserted into the new element.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
