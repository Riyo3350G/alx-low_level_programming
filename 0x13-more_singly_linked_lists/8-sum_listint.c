#include "lists.h"

/**
 * sum_listint - Sum of all the data of a listint_t list
 * @head: Pointer to the list
 *
 * Return: The elements sum
 **/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
