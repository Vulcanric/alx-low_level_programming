#include "main.h"

/**
 * print_diagonal - Draws a diagonal line 'n' times
 * @n: The number of times the character '\' should be printed
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i, j; /* Iterators */

	i = 1;
	if (n > 1)
	{
		while (i <= n)
		{
			j = 0;
			_putchar('\\');
			_putchar('\n');
			while (j < i)
			{
				if (!(i == n))
				{
					_putchar(' ');
				}
				else /* IF i is equal to n, break, don't print space */
				{
					break;
				}
				j++;
			}
			i++;
		}
	}
	else
		_putchar('\n');
}
