#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: The key.
 * Return: The value associated with the element or NULL if key not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	hash = ht->array[idx];
	while (hash && strcmp(hash->key, key) != 0)
		hash = hash->next;

	return ((hash == NULL) ? NULL : hash->value);
}
