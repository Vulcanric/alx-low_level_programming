#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print out
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0) /* IF number is negative */
	{
/*		n = -n; * Get the absolute value of number */
		_putchar('-'); /* Print minus '-' */
		n = -n;
	}

	if (n >= 10) /* IF number is 10 or  greater */
	{
		print_number(n / 10); /* Recursively divide n until n is less than 10 */
	}

	_putchar((n % 10) + '0'); /* Prints each digit from left to right */
}
