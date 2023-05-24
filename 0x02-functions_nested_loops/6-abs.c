#include "main.h"

/**
 * _abs - Prints the absolute value of a number
 * @n: The number whose absolute value is to be printed
 *
 * Return: On success 0.
 */
int _abs(int n)
{
	int result; /* Variable to hold the value to be return */

	if (n >= 0) /* IF number is equal to or greater than zero (Positive number) */
		result = n; /* Let the return-value be thesame number */
	else /* ELSE if number is a negative(-n) number */
		result = -n; /*
				* THEN let the return-value be -(n),
				* where n is - , therefore -(-n) will give +n
				*/

	return (result); /* return the absolute value of the number */
}
