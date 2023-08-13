#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number whose binary form is to be printed
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{

	if (n >> 1 != 0)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 01) + 48);
}
