#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to a string.
 * @c: Character to locate.
 * Return: Pointer to the first occurrence of character c.
 * else NULL.
 */
char *_strchr(char *s, char c)
{
	unsigned int i; /* Index */

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
