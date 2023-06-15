#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes anode from
 * a dlistint_t  at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1. Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *helper = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (helper == NULL)
			return (-1);
		helper = helper->next;
		index--;
	}

	if (helper == *head)
	{
		*head = helper->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		helper->prev->next = helper->next;
		if (helper->next != NULL)
			helper->next->prev = helper->prev;
	}

	free(helper);
	return (1);
}
