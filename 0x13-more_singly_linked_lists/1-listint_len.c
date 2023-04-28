#include "lists.h"

/**
 * listint_len - Return the number of elements in listin_t
 * @h: Pointer to linked list to print
 *
 * Return: the number of elements i the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
