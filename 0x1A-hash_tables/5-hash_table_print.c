#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, l;
	char *key, *value;
	hash_node_t *current;

	if (ht)
	{
		for (l = 0; l < ht->size; l++)
		{
			if (ht->array[l])
				break;
		}

		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			if (current)
			{
				if (i != l)
					printf(", ");
				while (current)
				{
					key = current->key;
					value = current->value;
					printf("'%s': '%s'", key, value);
					current = current->next;
					if (current)
						printf(", ");
				}
			}
		}
		printf("}\n");
	}
}
