#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int result, i = 0, j;  /*
				* Two variables to hold the numbers to be multiplied
				*/

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			printf("%d", result);
			/* To make times table aligned */
			if (((result + i) >= 10) && !(j == 9)) /*
								* IF the next number in
								* the row is a two-digit number
								*/
			{
				printf(", "); /* Print ',' and ' ' */
			}
			else if (((result + i) < 10) && !(j == 9)) /*
								* ELSE if it is a one-digit number
								*/
			{
				printf(",  "); /* Print ',' ' ' and ' '*/
			}

			j++;
		}
		printf("\n");
		i++;
	}
}
