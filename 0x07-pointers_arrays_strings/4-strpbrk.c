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
/* status to know if a character in s is matching a characeter in the set */
	int status = 0;
	char *null_ptr = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
		/* IF s character matches a character in the set */
			if (*s == *accept)
			{
				status = 1; /* Set status to 1 */
				break; /* THEN break this loop */
			}
			else if (*s != *accept)
				accept++;
		}

	/* To check the first occurence of similiarity between both */
		if (status == 1) /* IF both character match ....*/
		{
			break; /* Break the outer loop */
		/*
		 * THEN return pointer to the byte in s that
		 * matches one of the bytes in set
		 */
			return (s);
		}
		s++;
	}

	return (null_ptr); /* Otherwise, if no such byte found, return null */
}
