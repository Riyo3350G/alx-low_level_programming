#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to the hash table
 * @key: Key to add value at
 * @value: Value to add
 * Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i, size;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	size = ht->size;
	i = key_index((const unsigned char *)key, size);

	if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
	{
		ht->array[i]->value = strdup(value);
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
