#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	hash_table_t *ht;
	int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", NULL);
	hash_table_set(ht, "mentioner", "Hella");
	hash_table_set(ht, "heliotropes", "Healo");
	hash_table_set(ht, "neurospora", "Helao");
	hash_table_set(ht, "depravement", "Hallo");
	hash_table_set(ht, "serafins", "Hella");

	for (i = 0; i < 1024; i++)
	{
		if (ht->array[i] && ht->array[i]->next)
			printf("%s: %s, %s: %s\n", ht->array[i]->key, ht->array[i]->value, ht->array[i]->next->key, ht->array[i]->next->value);
		else if (ht->array[i])
			printf("%s: %s\n", ht->array[i]->key, ht->array[i]->value);
	}

	return (EXIT_SUCCESS);
}
