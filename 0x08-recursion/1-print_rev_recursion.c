#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s) /* IF character is not null */
	{
		_print_rev_recursion(s + 1); /* Continues until last character */
		_putchar(*s); /* THEN print characters from last character */
	}
}
