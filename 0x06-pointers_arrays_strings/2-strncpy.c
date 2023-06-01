#include "main.h"

/**
 * _strncpy - Copies a string.
 * @src: pointer to the string to be copied
 * @dest: Where src is copied to
 * @n: number of bytes to be copied from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++) /* Getting the amount to be copied */
	{
		dest[i] = src[i];
	}
	return (dest);
}
