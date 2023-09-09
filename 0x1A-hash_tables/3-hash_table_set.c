#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: string key
 * @value: value associated with @key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cp = NULL;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	if (value)
	{
		value_cp = malloc(sizeof(char) * strlen(value));
		if (!value_cp)
			return (0);
		strcpy(value_cp, value);
	}
	new->value = value_cp;

	if (!ht->array)
}
