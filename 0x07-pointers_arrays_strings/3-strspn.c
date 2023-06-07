#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be examined
 * @accept: Pointer to the set of characters to be considered
 * Return: Number of bytes in the initial segment of s that 
 * match bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter = 0; /* Index i and j and counter */
/* status to know if character is matching or a non-matching character */
	int status = 1;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++; /* Counter increments */
				status = 1; /* 1 to indicate matching character */
				break;
			}
			else if (s[i] != accept[j])
			{
				status = 0; /* 0 to indicate non-matching characters */
				j++;
			}
		}

	/* IF charcter at index i didnot match any characters of the set */
		if (status == 0)
		{
			break;
		}
		i++;
	}
	return (counter);
}
