#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the string to be appended to s1
 * Return: Pointer to the concatenated string Or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size;
	char *appended_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	size = i + j;

	appended_str = malloc(sizeof(*appended_str) * (size + 1));
	if (appended_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		appended_str[i] = s1[i];
	for (j = 0; s2[j]; j++)
		appended_str[i + j] = s2[j];

	return (appended_str);
}
