#include "lists.h"

/**
 * find_listint_loop - Find loop in a linked list
 * @head: Pointer to the linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = head;
	listint_t *rabbit = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (turtle != NULL && rabbit != NULL && rabbit->next != NULL)
	{
		rabbit = rabbit->next->next;
		turtle = turtle->next;

		if (rabbit == turtle)
		{
			turtle = head;
			while (turtle != rabbit)
			{
				turtle = turtle->next;
				rabbit = rabbit->next;
			}
			return (rabbit);
		}
	}

	return (NULL);
}
