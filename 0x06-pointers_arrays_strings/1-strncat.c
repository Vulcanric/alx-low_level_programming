#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @src: Pointer to string to be appended
 * @dest: Pointer to string where src will be appended
 * @n: amount of bytes from src
 * Return: Pointer to dest(appended result)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest; /* Iterator and length of dest */

	len_dest = 0; /* Initializing length to zero */

	/* WHILE loop to know the length of the string dest */
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
