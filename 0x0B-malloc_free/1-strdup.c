#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a duplicate copy of the string in a seperate
 * block of memory
 * @str: Pointer to the string to duplicate
 * Return: Pointer to the new string, or NULL if 'str' is NULL
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	new_str = malloc(sizeof(*str) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
