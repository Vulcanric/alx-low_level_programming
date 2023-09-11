#include "hash_tables.h"

/**
 * free_item - frees items node
 * @node: item to free
 * Return: nothing
 */
void free_item(hash_node_t *node)
{
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

	new_item = malloc(sizeof(hash_node_t));
	if (!new_item)
		return (0);

	new_item->key = (char *)malloc(sizeof(char) * strlen(key));
	strcpy(new_item->key, key);
	if (value)
	{
		new_item->value = (char *)malloc(sizeof(char) * strlen(value));
		strcpy(new_item->value, value);
	}
	new_item->next = NULL;

	/* getting the index, where to store key-value */
	index = key_index((const unsigned char *)new_item->key, ht->size);
	curr_item = ht->array[index];

	if (curr_item == NULL) /* empty bucket */
		ht->array[index] = new_item;
	else
	{
		/* Handling collisions and updating of values */
		while (curr_item->next && strcmp(curr_item->key, key) != 0)
			curr_item = curr_item->next;

		/* If the loop breaks before current item is null */
		/* meaning the key matched. Update key value */
		if (curr_item->next != NULL)
		{/* clear former memory and update with new value */
			free(curr_item->value);
			curr_item->value = new_item->value;
			free_item(new_item);  /* no longer needed */
		}
		else
			curr_item->next = new_item;
	}
	return (0);
}
