#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print out.
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0) /* IF number is negative */
	{
		_putchar('-');
		n = -n; /* let number be it's absolute value */
	}
	if (n >= 10) /* if number is greater than ascii char_num range('0' - '9')*/
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
