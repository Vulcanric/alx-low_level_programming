#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to integer1
 * @b: pointer to integer2
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp; /* Temporary holder */

	tmp = *a;
	*a = *b;
	*b = tmp;
}
