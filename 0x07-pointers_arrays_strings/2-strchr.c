#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to a string.
 * @c: Character to locate.
 * Return: Pointer to the first occurrence of character c.
 * else NULL.
 */
char *_strchr(char *s, char c)
{
	int status = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			status = 1;
			break;
		}
		s++;
	}
	if (status != 1)
	{
		_putchar('\n');
		return (NULL);
	}
	return (s);
}
