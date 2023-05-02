#include "lists.h"

/**
 * print_listint_safe - Prints a linked list in safe mode
 * @head: Pointer to the beginning of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ctr = 0;
	
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		ctr ++;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (ctr);
}
