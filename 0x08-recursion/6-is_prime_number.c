#include "main.h"

int is_prime(int n, int divisor);
/**
 * is_prime_number - Checks if a number is a prime number or not
 * @n: Number to examine
 * Return: 1 if number is prime, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}

/**
 * is_prime - Helps the is_prime_number function
 * @n: Number to examine
 * @divisor: multiples under n
 * Return: 1 if number is prime, else 0
 */
int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (is_prime(n, divisor + 1));
}
