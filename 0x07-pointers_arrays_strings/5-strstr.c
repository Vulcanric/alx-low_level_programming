#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string that is examined
 * @needle: Pointer to substring to look for
 * Return: Pointer to the beginning of the located substring,
 * Or NULL, if the sustring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0')
		{
			if (*haystack == needle[i])
			{
			/* return pointer to the located substring */
				return (haystack);
			}
			else
				break; /* ELSE, break loop */
		}
		haystack++;
	}
	return ('\0'); /* Return null if substring is not found */
}
