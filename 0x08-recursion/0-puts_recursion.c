#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a newline
 * @s: Pointer to the string to print
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
