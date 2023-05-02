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
	const listint_t *fs, *nx;

	fs = head;
	while (fs != NULL)
	{
		ctr++;
		printf("[%p] %d\n", (void *)fs, fs->n);
		nx = fs->nx;
		
		if (nx >= fs)
		{
			printf("-> [%p] %d\n", (void *)nx, nx->n);
			exit(98);
		}
		fs = nx;
	}
	
	return (ctr);
}
