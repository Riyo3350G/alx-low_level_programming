#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double pointer to the head of the dlistint_t list.
 * @idx: The index to locate node.
 * @n: The new node data.
 *
 * Return: The address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *helper = *h, *node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		helper = helper->next;
		if (helper == NULL)
			return (NULL);
		idx--;
	}

	if (helper->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = helper;
	node->next = helper->next;
	helper->next->prev = node;
	helper->next = node;

	return (node);
}
