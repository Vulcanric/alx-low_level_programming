#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to string
 * Return: formated output.
 */
char *string_toupper(char *str)
{
	int i; /* Character index */
	int n; /* Place value of character */

	i = 0;
	while (str[i] != '\0')
	{
	/* This will equate to the place value of the character from 1 to 25 */
		n = str[i] - 97;
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = 65 + n;
		}
		i++;
	}
	return (str);
}
