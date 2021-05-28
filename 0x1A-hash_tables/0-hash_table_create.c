#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size array
 *
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	{
		return (NULL);
	}

	hash->array = malloc(sizeof(void *) * size);
	if (hash->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash->array[i] = NULL;
	}

	hash->size = size;

	return (hash);
}
