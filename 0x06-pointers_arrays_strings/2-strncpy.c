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

	/* Getting the amount to be copied */
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	/*
	 * if the content of src is less than n, fill the remaining space
	 * with null (null padding)
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
