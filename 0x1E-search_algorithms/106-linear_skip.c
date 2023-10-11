#include "search_algos.h"
/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 * Return: Pointer to the first node where value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump_node;

	if (!list)
		return (NULL);

	for (node = jump_node = list;
			jump_node->next != NULL && jump_node->n < value;)
	{
		node = jump_node;
		if (jump_node->express)
		{
			jump_node = jump_node->express;
			printf("Value checked at index [%d] = [%d]\n",
					(int)jump_node->index, jump_node->n);
		}
		else
		{
			while (jump_node->next)
				jump_node = jump_node->next;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n",
			(int)node->index, (int)jump_node->index);
	for (; node->index < jump_node->index && node->n < value; node = node->next)
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
	printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
	if (node->n == value)
		return (node);
	return (NULL);
}
