#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: pointer to string to be appended
 * @dest: pointer to string where src will be appended
 * Return: Pointer to dest(appended result)
 */
char *_strcat(char *dest, char *src)
{
	int i, len_src, len_dest; /* Iterator and length of string */

	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	i = 0;
	while (i < len_src)
	{
		dest[len_dest + i] = src[i];
		i++;
	}

	dest[len_dest + i] = '\0'; /* adding Null byte to the end of appended dest */

	return (dest);
}
