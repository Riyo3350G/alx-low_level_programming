#include "lists.h"
/**
 * pop_listint - Removes the head node of the listint_t
 * @head: Pointer to pointer to the listint_t list
 *
 * Return: the head node's data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (*head == NULL)
	{
		return (0);
	}

	current	= *head;
	*head = (*head)->next;
	i = current->n;
	free(current);
	return (i);
}
