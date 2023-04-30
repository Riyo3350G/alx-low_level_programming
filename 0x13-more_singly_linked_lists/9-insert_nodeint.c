#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t
 * @head: Pointer to a pointer to the head of the linked list
 * @idx: The index of the position where the new node should be inserted
 * @n: The value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *p = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		if (p == NULL || p->next == NULL)
		{
			return (NULL);
		}
		p = p->next;
		i++;
	}

	new_node->next = p->next;
	p->next = new_node;

	return (new_node);
}
