#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Print the 'n' times table starting from 0
 * @n: 'n'
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int a, b, result;

	if (!(n > 15 || n < 0))
	{
		a = 0;
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				result = a * b;
				printf("%d", result);
			/*
			 * IF the next result in row is a two-digit number
			 * and the column is not the last column
			 */
				if (((result + a) >= 10 && (result + a) < 100) && (!(b == n)))
				{
					printf(",  ");
				}
			/*
			 * ELSE IF the next result in row is a single-digit number
			 * and the column is not the last column
			 */
				else if (((result + a) < 10) && (!(b == n)))
				{
					printf(",   ");
				}
			/*
			 * ELSE IF the next result in row is a three-digit number
			 * and the column is not the last column
			 */
				else if (((result + a) > 99) && (!(b == n)))
				{
					printf(", ");
				}

				b++;

			}
			printf("\n");
			a++;
		}

	}
}
