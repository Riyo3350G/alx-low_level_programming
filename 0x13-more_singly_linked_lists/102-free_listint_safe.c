#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to Pointer of the start of list to
 * Return: The size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ctr = 0;
	listint_t *keeper = NULL;

	if (h == NULL && (*h) == NULL)
		return (ctr);
	while ((*h) != NULL)
	{
		ctr++;
		if (*h > (*h)->next)
		{
			keeper = *h;
			*h = (*h)->next;
			free(keeper);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (ctr);
}
