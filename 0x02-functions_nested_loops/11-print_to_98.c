#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from 'n' to 98
 * @n: 'n'
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	/* When 'n' is less */
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (!(n == 98))
			{
				printf(", ");
			}
			n++;
		}
	}
	/* When 'n' is greater than 98 */
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n); /* print all numbers in range */
			if (!(n == 98))
			{
				printf(", ");
			}
			n--; /* decrement untill 'n' is 98 */
		}
	}
	printf("\n"); /* print newline after all is done */
}
