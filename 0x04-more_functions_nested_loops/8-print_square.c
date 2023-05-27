#include "main.h"

/**
 * print_square - Prints square shape of size "size"
 * @size: "size"
 * Return: Nothing.
 */
void print_square(int size)
{
	int i, j; /* Iterators */

	j = 0;
	while (j < size) /* Used for side length */
	{
		i = 0;
		while (i < size) /* Used for base length */
		{
			if (!(size < 1))
			{
				_putchar('#');
				i++;
			}
			else
				_putchar('\n');
		}
		_putchar('\n');
		j++;
	}
}
