#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a newline
 * @s: Pointer to the string to print
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s); /* THEN Print the character */
		s++;
	}
/*	_puts_recurs*/
	_putchar('\n');
}
