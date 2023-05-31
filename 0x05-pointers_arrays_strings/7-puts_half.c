#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: pointer to the string
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int n, len = 0; /* Length of the string(len) */

	while (str[len] != '\0')
	{
		len++; /* this will give the length of the string with NULL byte */
	}

	n = (len - 1) / 2; /* half of the string */
	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
