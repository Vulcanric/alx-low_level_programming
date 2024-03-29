#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: list of types of arguments passed to the function
 * @...: optional arguments of different types
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(all, double));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(all, int));
					break;
				case 's':
					str = va_arg(all, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++; /* Increment i and ignore it by */
					continue; /* going to the next iteration */
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
