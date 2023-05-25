#include "main.h"

/**
 * jack_bauer - A function that prints every minutes of
 * the day starting from "00:00" to "23:59"
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int min_dg1, min_dg2, secd1, secd2;

	min_dg1 = 48; /* Initialize first minute-digit to '0' */
	while (min_dg1 <= 50) /* WHILE it is less than or equal to '2' */
	{
		min_dg2 = 48; /* Initialize 2nd minute-digit to '0' */
		while (min_dg2 <= 57) /* WHILE it is less than or equal to '9' */
		{
			secd1 = 48; /* Initialize 1st seconds-digit to '0' */
			while (secd1 <= 53) /* WHILE it less than or equal to '5' */
			{
				secd2 = 48; /* Initialize 2nd seconds-digit to '0' */
				while (secd2 <= 57) /* WHILE it is less than or equal to '9' */
				{
					/* Stop just before "24:00"*/
					if (min_dg1 >= 50 && min_dg2 >= 52 && secd1 >= 48 && secd2 >= 48)
					{
						break;
					}
					_putchar(min_dg1);
					_putchar(min_dg2);
					_putchar(':');
					_putchar(secd1);
					_putchar(secd2);
					_putchar('\n');
					secd2++;
				}
				secd1++;
			}
			min_dg2++;
		}
		min_dg1++;
	}
}
