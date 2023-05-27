#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0'); /* '0' is = 48; ascii value*/
	}
	_putchar('\n');
}
