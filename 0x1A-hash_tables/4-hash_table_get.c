#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with @key
 * @ht: table to find key/value
 * @key: key
 * Return: value associated with @key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr_item;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr_item = ht->array[index];

	if (!curr_item) /* key does not exist */
		return (NULL);

	/* search list until key is found */
	while (curr_item && strcmp(curr_item->key, key) != 0)
		curr_item = curr_item->next;

	if (curr_item)
		return (curr_item->value);

	return (NULL);
}
