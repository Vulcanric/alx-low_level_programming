#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: pointer to the string
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int n, last_index, len = 0; /* Length of the string(len) */

	while (str[len] != '\0')
	{
		len++; /* this will give the length of the string with NULL byte */
	}

	last_index = len - 1; /* number of indexes */

	if (!(last_index % 2 == 0)) /* checking IF the number of indexes is odd */
	{
		n = len / 2; /* half of the string */
		while (n <= len)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
