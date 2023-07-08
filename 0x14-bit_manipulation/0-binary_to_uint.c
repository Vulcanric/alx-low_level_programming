#include "main.h"

/**
 * binary_to_uint - Converts binary numbers to unsigned integers
 * @b: Pointer to a string containing chars 0 and 1
 * Return: the converted result, else 0
 * if a non-0 and 1 char is found or if b id NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result; /* Variable to hold the result */
	int i; /* index */

	result = 0;
	for (i = 0; b[i]; i++)
	{
		/* If char at index is base 2 */
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			/*result = result x 2 + int rep of b[i] */
		}
		else /*IF not base 2, return 0 */
			return (0);
	}

	return (result); /* return converted result */
}
