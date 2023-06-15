#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes(counter)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_ctr = 0;

	while (h != NULL)
	{
		nodes_ctr++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes_ctr);
}
