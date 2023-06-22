#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to name(string) to print
 * @f: Pointer to function to call back
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name); /* Calling back the function that f is pointing to */

	return;
}
