#include "hash_tables.h"

/**
 * key_index - Function gives you the index of a key.
 * @key: The key of an index.
 * @size: The size of the array of a hash table.
 * Return: The index of the key/value pair stored in a hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
