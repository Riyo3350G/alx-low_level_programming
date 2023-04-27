#include "lists.h"

/**
 * list_len - Count the number of elements in a linked list_t list.
 * @h: Pointer to  list_t.
 *
 * Return: The number of elments.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
