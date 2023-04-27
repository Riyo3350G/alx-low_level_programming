#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees list_t list
 * @head: Pointer to the list_t list.
 *
 * Return: No return
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}

	free(head);
}
