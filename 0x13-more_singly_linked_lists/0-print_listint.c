#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list
 * @h: A pointer to the listint_t list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
