#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its parameters
 * @n: Number of integers passed
 *
 * Return: sum of all its parameters if n is zero, else 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list add;

	if (n == 0)
		return (0);

	va_start(add, n);
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);

	va_end(add);

	return (sum);
}
