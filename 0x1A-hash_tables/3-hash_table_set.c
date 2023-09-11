#include "hash_tables.h"

/**
 * free_item - frees items node
 * @node: item to free
 * Return: nothing
 */
void free_item(hash_node_t *node)
{
	if (node->key)
		free(node->key);
	if (node->value)
		free(node->value);
	if (node->next)
		free(node->next);
	free(node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: string key
 * @value: value associated with @key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *curr_item;
	unsigned long int index;

	if (!ht)
		return (0);

	new_item = malloc(sizeof(hash_node_t));

	if (key)
		new_item->key = strdup(key);
	if (value)
		new_item->value = strdup(value);
	new_item->next = NULL;

	/* getting the index, where to store key-value */
	index = key_index((const unsigned char *)new_item->key, ht->size);
	curr_item = ht->array[index];

	if (curr_item == NULL) /* empty bucket */
		ht->array[index] = new_item;
	else
	{
		while (curr_item && strcmp(curr_item->key, key) != 0)
			curr_item = curr_item->next;

		if (curr_item != NULL)
		{
			strcpy(curr_item->value, new_item->value);
			free_item(new_item);
		}
		else
		{
			new_item->next = ht->array[index];
			ht->array[index] = new_item;
		}
	}
	return (1);
}
