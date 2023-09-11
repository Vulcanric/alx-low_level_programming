#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, len;
	char output[2048] = "";

	if (ht)
	{
		strcat(output, "{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				strcat(output, "'");
				strcat(output, ht->array[i]->key);
				strcat(output, "'");
				strcat(output, ": ");
				strcat(output, "'");
				strcat(output, ht->array[i]->value);
				strcat(output, "'");
				strcat(output, ", ");
			}
		}
		len = strlen(output);
		output[len - 2] = '\0';
		strcat(output, "}");
		printf("%s\n", output);
	}
}
