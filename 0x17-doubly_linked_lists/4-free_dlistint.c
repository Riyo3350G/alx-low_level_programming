#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of dlistint_s list.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	while (head != NULL)
	{
		freed = head;
		head = head->next;
		free(freed);
	}
}
