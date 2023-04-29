#include "lists.h"

/**
 * free_listint - Frees listint_t list
 * @head: Pointer to the listint_t list.
 *
 * Return: No return
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
