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
			/* To make times table aligned */
			if (result < 10 && !(j == 9))
			{
				printf(",  ");
			}
			else if (result >= 10 && !(j == 9))
			{
				printf(", ");
			}

			j++;
		}
		printf("\n");
		i++;
	}
}
