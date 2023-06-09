#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number or not
 * @n: Number to examine
 * Return: 1 if number is prime, else 0
 */
int is_prime_number(int n)
{
	int i;

	if (n >= 2)
	{
		for (i = 1; i < n; i++)
		{
			if (n % i == 0) /* Checking IF i is a multiple of n */
				return (0); /* IF it is, return 0 */
			else
				return (1); /* IF it is not, return 1 */
		}
		is_prime_number(n);
	}
	return (0);
}
