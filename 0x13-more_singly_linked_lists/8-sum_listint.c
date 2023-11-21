#include "lists.h"

/**
 * sum_listint - Calculate the sum of all data in a listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	const listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
