#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments passed to it
 * @ac: Argument counter
 * @av: Pointer to array of strings(argument)
 * Return: Pointer to a new string if successful, else NULL
 */
char *argstostr(int ac, char **av)
{
	char *newString;
	int size = 0, i, j, index = 0, new_size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	newString = malloc(sizeof(*newString) * (size + ac + 1));
	if (newString == NULL) /* If malloc fails to allocate memory */
		return (NULL); /* return null */

	/* ac indicates the number of newline after each argument */
	new_size = size + ac + 1;

	for (i = 0; i < ac && index < new_size; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
		/* Assigning each element of the 2D array into newString */
			newString[index] = av[i][j];
			index++;
		}
		newString[index] = '\n';
		index++;
	}
	newString[index] = '\0'; /* Adding null terminator at the end  */

	return (newString); /* return the new string */
}
