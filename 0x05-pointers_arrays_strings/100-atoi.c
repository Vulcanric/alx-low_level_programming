#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to the string to be converted
 * Return: s, if the character is number.
 * else 0.
 */
int _atoi(char *s)
{
	int i; /* Index counter */

	/*
	 * FOR LOOP
	 *  Initialize i to be zero
	 *  break when pointer-to-string index is NULL byte
	 *  Increment i
	 */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* IF character at index is a number or sign plus or minus */
		if ((s[i] >= '0' && s[i] <= '9') || (s[i] == 43 || s[i] == 45))
		{
			return (s[i]); /* THEN return the number or sign */
		}
		else /* ELSE if it is any other character */
			return (0); /* do not consider */
	}
	return (0);
}
