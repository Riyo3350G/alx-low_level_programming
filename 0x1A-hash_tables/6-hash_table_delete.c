#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i]->node;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
