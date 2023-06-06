#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination string
 * @src: Pointer to memory area where it is copied from
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /* Counter */

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
