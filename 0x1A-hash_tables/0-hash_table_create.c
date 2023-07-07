#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with he given size
 * @size: The size array in each node
 * Return: Return a pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int index;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		table->array[index] = NULL;
	}
	table->size = size;

	return (table);
}
