#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: pointer to string to be appended
 * @dest: pointer to string where src will be appended
 * Return: Pointer to dest(appended result)
 */
char *_strcat(char *dest, char *src)
{
	int i, len1, len2; /* Iterator and length of string */

	len1 = 0;
	while (src[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (dest[len2] != '\0')
	{
		len2++;
	}

	i = 0;
	while (i <= len1)
	{
		dest[len2] = src[i];
		len2 = len2 + 1;
		i++;
	}
	return (dest);
}
