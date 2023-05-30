#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: pointer to string("array of character")
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i; /* Iterator */

	i = _strlen(s); /*
			 * assigning iterator to
			 * the last index of array before '\0'
			 */
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
