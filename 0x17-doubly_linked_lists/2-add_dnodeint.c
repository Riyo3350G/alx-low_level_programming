#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = n_node;
	}
	*head = n_node;
	return (n_node);
}
