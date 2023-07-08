#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 if success or 0 if failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_val;
	char *val_cpy;
	unsigned long int idx, h;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	h = idx;
	while (ht->array[h])
	{
		if (strcmp(ht->array[h]->key, key) == 0)
		{
			free(ht->array[h]->value);
			ht->array[h]->value = val_cpy;
			return (1);
		}
		h++;
	}
	new_val = malloc(sizeof(hash_node_t));
	if (new_val == NULL)
	{
		free(val_cpy);
		return (0);
	}
	new_val->key = strdup(key);
	if (new_val->key == NULL)
	{
		free(new_val);
		return (0);
	}
	new_val->value = val_cpy;
	new_val->next = ht->array[idx];
	ht->array[idx] = new_val;
	return (1);
}
