#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 without 2 and 4
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		if (!(num == 2 || num == 4))
		{
			_putchar(num + 48);
		}
		num++;
	}
	_putchar('\n');
}
