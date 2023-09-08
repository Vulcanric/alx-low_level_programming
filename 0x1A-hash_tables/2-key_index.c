#include "hash_tables.h"

/**
 * key_index - computes/generate the index of a key
 * @key: string key
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
