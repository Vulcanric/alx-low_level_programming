#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string
 * Return: Capitaliized string
 */
char *cap_string(char *str)
{
	int i; /* Character index */
	int plc_num; /* Place-number of letter */

	i = 0;
	while (str[i] != '\0')
	{
		plc_num = str[i] - 'a'; /* letter at index minus letter 'a' */
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = plc_num + 'A';

		plc_num = str[i + 1] - 'a'; /* Next letter minus 'a' */
		/* Checking seperators of words */
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.')
		{
			/* IF the next letter is a lowercase letter */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = plc_num + 'A'; /* Change to upper */
		}

		else if (str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '"')
		{
			/* IF the next letter is a lowercase letter */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = plc_num + 'A'; /* Change to upper */
		}
		else if (str[i] == '?' || str[i] == '(' || str[i] == ')' || str[i] == '{')
		{
			/* IF the next letter is a lowercase letter */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = plc_num + 'A'; /* Change to upper */
		}
		i++;
	}

	return (str);
}
