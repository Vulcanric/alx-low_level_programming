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
	int i = 0, j = 0;
	char *str, types[5] = "cifs";
	va_list all;

	va_start(all, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);
				if (str != NULL)
					printf("%s", str);
				if (str == NULL)
					printf("(nil)");
				break;
			default:
				break;
		}

		while (types[j] != '\0' && format[i + 1] != '\0' && (format[i] == types[j]))
		{
			printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
