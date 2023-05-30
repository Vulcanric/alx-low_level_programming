#include "main.h"

/**
 * puts2 - Prints every other character of a string that are
 * at indexes divisible by 2 including the first index
 * @str: pointer to string
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0; /* counter iterator */

	while (str[i] != '\0')
	{
		if (i == 0 && i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
