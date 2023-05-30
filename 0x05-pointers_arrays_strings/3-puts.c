#include "main.h"

/**
 * _puts - Prints a string
 * @str: Pointer to string("array of characters")
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i; /* Iterator */

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
