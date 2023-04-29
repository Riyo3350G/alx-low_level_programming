#include "lists.h"

/**
 * free_listint2 - Frees listint_t list and set header to NULL
 * @head: Pointer to pointer to the listint_t list.
 *
 * Return: No return
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	head = NULL;
}
