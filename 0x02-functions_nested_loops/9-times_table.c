#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int result, i = 0, j;  /* Two variables to hold the numbers to be multiplied */

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			printf("%d", result);
			if (!(i >= 9))
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
