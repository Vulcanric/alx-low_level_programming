#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: pointer to the string
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int n, m, len = 0; /* Length of the string(len) */

	while (str[len] != '\0')
	{
		len++; /* this will give the length of the string */
	}

	if (len % 2 == 0) /* IF length of string is even */
	{
		n = (len) / 2; /* half of the string */
		while (n < len)
		{
			_putchar(str[n]); /* print chars from middle(n) to end(len) */
			n++;
		}
	}
	else /* ELSE if it is odd */
	{
		n = (len - 1) / 2;
		m = len - n; /* last n characters */
		while (m < len)
		{
			_putchar(str[m]);
			m++;
		}
	}
	_putchar('\n');
}
