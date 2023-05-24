#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the number whose last digit should be printed
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int absld, lastdigit = n % 10; /* This gives the last digit of any number */
	if (lastdigit < 0)
	{
		absld = -lastdigit; /* Let the result be -(negative last-digit) which is = positive lastdigit */
	}
	else
		absld = lastdigit;
	_putchar(absld + 48); /* 48 is ascii value for '0' */

	return (absld); /* return the last digit of the number */
}
