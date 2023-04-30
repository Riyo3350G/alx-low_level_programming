#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * at a given position in a linked list
 *
 * @head: Pointer to a pointer to the head of the linked list
 * @index: The index of the position of the node to be deleted
 *
 * Return: 1 if the deletion is successful, -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (i < index - 1)
	{
		if (p == NULL || p->next == NULL)
		{
			return (-1);
		}
		p = p->next;
		i++;
	}
	node = p->next;
	p->next = node->next;
	free(node);

	return (1);
}
