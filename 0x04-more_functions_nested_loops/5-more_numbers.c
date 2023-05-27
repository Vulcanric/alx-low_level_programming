#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i, num; /* Declared iterator and num variable*/

	i = 0;
	while (i <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			printf("%d", num);
			num++;
		}
		_putchar('\n');
		i++;
	}
}
