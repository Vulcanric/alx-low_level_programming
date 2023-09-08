#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: newly created hash table if succesful, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t) * size);
	if (!table)
		return (NULL);
	table->size = size;

	return (table);
}
