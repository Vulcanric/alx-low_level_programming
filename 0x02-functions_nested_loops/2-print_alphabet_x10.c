#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet, in lowercase 10 times
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char alpha; /* Variable to hold each letter */

	int count = 0; /* Counter. It counts the number of times the letter should be displayed */
	while (count < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
