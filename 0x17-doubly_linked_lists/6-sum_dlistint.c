#include "lists.h"

/**
 * sum_dlistint - The sum of all the data (n) of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
