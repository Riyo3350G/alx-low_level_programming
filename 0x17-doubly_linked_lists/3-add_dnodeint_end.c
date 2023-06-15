#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *last_node;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = n_node;
	n_node->prev = last_node;
	return (n_node);
}
