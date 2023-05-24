#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number whose sign is to printed
 * prints '+' if n is greater than 0, '-' if n is
 * less than 0 and '0' if n is 0
 *
 * Return: 1 if n is greater than 0, -1 if n is less than 0
 * else 0
 */
int print_sign(int n)
{
	int retnum;

	if (n > 0)
	{
		_putchar('+');
		retnum = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retnum = 0;
	}
	else
	{
		_putchar('-');
		retnum = -1;
	}

	return (retnum);
}
