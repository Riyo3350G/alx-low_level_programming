#include "lists.h"

/**
 * reverse_listint - Reverses the listint_t linked list
 * @head:Pointer to pointer to the head of the linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *c = *head, *n;

	while (c != NULL)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}

	*head = p;

	return (*head);
}
