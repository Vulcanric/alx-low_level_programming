#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to be examined
 * @accept: Pointer to the set of characters to be considered
 * Return: Pointer to the byte in s that matches one of
 * the bytes in accept, else NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
		/* IF s character matches a character in the set */
			if (*s == accept[i])
			{
			/* THEN return pointer to the character in s */
				return (s);
			}
			i++;
		}
		s++;
	}

	return ('\0'); /* Otherwise, if no such byte found, return null */
}
