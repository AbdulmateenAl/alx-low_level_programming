#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned long int h = 0;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");

	while (h < ht->size)
	{
		if (ht->array[h] != NULL)
		{
			if (flag == 1)
				printf(", ");
			hash = ht->array[h];
			while (hash != NULL)
			{
				printf("'%s': '%s'", hash->key, hash->value);
				hash = hash->next;
				if (hash != NULL)
					printf(", ");
			}
			flag = 1;
		}
		h++;
	}
	printf("}\n");
}
