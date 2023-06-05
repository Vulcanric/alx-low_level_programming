#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded
 * Return: The encoded string 's'
 */
char *leet(char *s)
{
	int i, j;
	char leetchar[] = "aAeEoOlLtT";
	char leetnum[] = "4433001177";

	/* FOR LOOP to run through each character of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leetchar[j])
				s[i] = leetnum[j];
		}
	}
	return (s); /* return encoded string */
}
