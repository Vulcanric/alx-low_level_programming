#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: Optional arguments (The strings to print)
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list str_list;

	if (n == 0)
		printf("\n");

	va_start(str_list, n);

	while (i < n)
	{
		printf("%s", va_arg(str_list, char *));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		else if (i == (n - 1))
			printf("\n");
		i++;
	}
}
