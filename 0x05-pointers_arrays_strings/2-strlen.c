#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to array of characters
 * Return: string length.
 */
int _strlen(char *s)
{
	int i; /* Iterator */

	int counter = 0;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		counter++;
	}
	return (counter);
}
