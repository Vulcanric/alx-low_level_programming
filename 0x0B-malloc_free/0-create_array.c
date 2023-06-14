#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initialize it
 * with a specific character
 * @size: Size of the array
 * @c: Character to be used during initialization
 * Return: Pointer to an array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size * sizeof(char));
	if (*a == '\0' || size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	a[i] = '\0';

	return (a);
}
