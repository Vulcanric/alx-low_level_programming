#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: newly created hash table if succesful, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}

	table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		return (NULL);
	}

	/* Initialize size of the array */
	table->size = size;

	return (table);
}
