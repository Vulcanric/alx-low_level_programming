#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: pointer to string to be appended
 * @dest: pointer to string where src will be appended
 * Return: Pointer to dest(appended result)
 */
char *_strcat(char *dest, char *src)
{
	int i, len_dest; /* Iterator and length of string */

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++; /* To get the length of dest */
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
