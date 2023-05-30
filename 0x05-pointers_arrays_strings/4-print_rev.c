#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: pointer to string("array of character")
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i; /* index */

	i = 0;
	while (s[i] != '\0') /* WHILE the string index is not the NULL byte */
	{
		i++; /* Increment i to be equal to the string length + 1(NULL)*/
	}

	i--; /* Decrement i to be equal to the last index less than NULL */

	while (i >= 0) /* WHILE i is the last index */
	{
		_putchar(s[i]);
		i--; /* Do a backward loop to print the character in each index*/
	}
	_putchar('\n'); /* print newline after string is reversed */
}
