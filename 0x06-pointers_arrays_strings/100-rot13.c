#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: Pointer to the string to be encoded
 * Return: Encoded string.
 */
char *rot13(char *s)
{
	int i, j; /* Iterators */
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = rot13_out[j];
				break;
			}
		}
		i++;
	}
	return (s); /* return the encoded string */
}
