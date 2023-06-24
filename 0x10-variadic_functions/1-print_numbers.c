#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints integers passed to its function
 * @separator: String to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numlist;

	if (n == 0)
		return;

	va_start(numlist, n);

	for (i = 0; i < n && separator != NULL; i++)
	{
		printf("%d", va_arg(numlist, int));
		if (i != (n - 1))
			printf("%s", separator);
		else
			printf("\n");
	}

	va_end(numlist);
}
