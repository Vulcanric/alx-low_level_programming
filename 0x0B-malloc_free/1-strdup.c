#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a duplicate copy of the string in a seperate block of memory
 * @str: Pointer to the string to duplicate
 * Return: Pointer to the new string, or NULL if 'str' is NULL
 */
char *_strdup(char *str)
{
	unsigned int i, size = strlen(str);
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(*str) * size);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < size && *str; i++)
	{
		new_str[i] = *str;
		str++;
	}
	return (new_str);
}
