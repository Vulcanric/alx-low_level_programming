#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: newly created hash table if succesful, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t) * size);
	if (!table->array)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	/* Initialize size of the array */
	table->size = size;

	return (table);
}
