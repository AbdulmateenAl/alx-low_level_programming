#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table or NULL if error.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int h = 0;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
		return (NULL);
	while (h < size)
	{
		hash->array[h] = NULL;
		h++;
	}

	return (hash);
}
