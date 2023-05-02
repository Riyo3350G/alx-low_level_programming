#include "lists.h"

/**
 * print_listint_safe - Printis a linked list in safe mode
 * @head: Pointer to the beginning of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *turtle = head, *rabbit = head;
	size_t ctr = 0;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	while (turtle != NULL && rabbit != NULL && rabbit->next != NULL)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;

		if (turtle == rabbit)
		{
			printf("[%p] %d\n", (void *)turtle, turtle->n);
			ctr++;
			while (turtle != rabbit->next)
			{
				printf("[%p] %d\n", (void *)turtle, turtle->n);
				ctr++;
				turtle = turtle->next;
			}
			return (ctr);
		}

		printf("[%p] %d\n", (void *)turtle, turtle->n);
		ctr++;
	}

	return (ctr);
}
