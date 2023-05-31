#include "main.h"

/**
 * rev_string - Reverses a string. It modifies the string
 * gives the reversed form
 * @s: pointer to the string that will be modified
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len = 0; /* Length of string Initialized to zero */

	int start, end;

	while (s[len] != '\0')
	{
		len++;
	}

	start = 0; /* Starting character of the string */
	end = len - 1; /* Finding the end of the string */
	while (start < end)
	{
		char tmp; /* Temporary holder of character */

		tmp = s[start]; /* Holds starting char value */
		s[start] = s[end]; /* Swaps ending characters to start char */
		s[end] = tmp; /* Swaps starting characters to end characeter */
		/* enables iteration until all chars are swapped */
		start++;
		end--;
	}
}
