#include "lists.h"

/**
 * add_node_end - Add a node at the end of list_t list
 * @head: Doubly pointer to list_t
 * @str: New value for the node
 *
 * Return: Address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
