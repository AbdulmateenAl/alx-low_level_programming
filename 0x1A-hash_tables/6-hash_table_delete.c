#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: A pointer to the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *hash, *tmp;
	unsigned long int h = 0;

	while (h < ht->size)
	{
		if (ht->array[h] != NULL)
		{
			hash = ht->array[h];
			while (hash != NULL)
			{
				tmp = hash->next;
				free(hash->key);
				free(hash->value);
				free(hash);
				hash = tmp;
			}
		}
		h++;
	}
	free(head->array);
	free(head);
}
