#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char flg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flg == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			flg = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
