#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to pointer to a string.
 * @to: Pointer to characters.
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to; /* dereference double pointer to the value of pointer */
}
