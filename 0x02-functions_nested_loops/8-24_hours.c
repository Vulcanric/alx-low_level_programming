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
	while (min_dg1 <= 50) /* WHILE it is less than or equal to 2 */
	{
		min_dg2 = 48; /* Initialize 2nd minute-digit to '0' */
		while (min_dg2 <= 51)
		{
			secd1 = 48;
			while (secd1 <= 53)
			{
				secd2 = 48;
				while (secd2 <= 57)
				{
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
