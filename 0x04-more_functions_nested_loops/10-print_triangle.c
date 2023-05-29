#include "main.h"

/**
 * print_triangle - prints triangle of size "size"
 * @size: "size"
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j, k; /* Declare iterator variable */

	/*
	 * i is for newlines, j is for the spaces
	 * and k is for printing the characters
	 */
	/* Taking size as 10 for example */
	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = size;
			while (j > i) /* print ' ' 9 times, followed by 8 times and so on */
			{
				_putchar(' ');
				j--;
			}

			k = 0;
			while (k < i) /* print the character i times */
			{
				_putchar('#');
				k++;
			}

			_putchar('\n'); /* print newline to start printing on a newline*/
			i++;
		}
/*			_putchar('\n'); */
	}

	else
		_putchar('\n');
}
