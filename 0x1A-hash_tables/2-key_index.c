#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 *
 * @key: The key to give index of
 * @size: The size of the array of the hash table
 *
 * Return: The index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
