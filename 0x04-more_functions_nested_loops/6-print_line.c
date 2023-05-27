#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: the number of times the character '_' should be printed
 * Return: Nothing.
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (!(n < 1))
		{
			_putchar('_');
		}
		else
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
