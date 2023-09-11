#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to be deleted
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *current;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];

			while (current)
			{
				tmp = current;
				current = current->next;
				free_item(tmp);
			}
		}

		free(ht->array);
		free(ht);
	}
}
