#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet in lowercase letters
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return;
}
