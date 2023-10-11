#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algo
 * @list: pointer to the head of the list
 * @size: size of the list (number of elements)
 * @value: value to search for int the list
 *
 * Return: first idx of the value or -1 if value is not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t steps, idx;
	listint_t *node, *jump_node;

	if (!list || size == 0)
		return (NULL);

	steps = sqrt(size);
	idx = 0;

	for (node = jump_node = list;
			jump_node->index + 1 < size && jump_node->n < value;)
	{
		node = jump_node;
		for (idx += steps; jump_node->index < idx; jump_node = jump_node->next)
		{
			if (jump_node->index + 1 == size)
				break;
		}
		printf("Value checked at index [%d] = [%d]\n",
				(int)jump_node->index, jump_node->n);

	}

	printf("Value found between indexes [%d] and [%d]\n",
			(int)node->index, (int)jump_node->index);

	for (; node->index < jump_node->index && node->n < value; node = node->next)
	{
		/* printf("srt\n"); */
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);

	}
	printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
	if (node->n == value)
	{
		/* printf("end1\n"); */
		return (node);
	}
	/* printf("end\n"); */
	return (NULL);
}
