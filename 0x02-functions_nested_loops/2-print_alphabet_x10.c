#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet, in lowercase 10 times
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char alpha; /* Variable to hold each letter */

	int count = 0; /*
			* Counter. It counts the number of times the
			* letter should be displayed
			*/

	while (count < 10) /* WHILE counter is less than 10 */
	{
		alpha = 'a'; /* Initialize alpha to 'a' */
		while (alpha <= 'z') /* WHILE alpha is less than 'z'... */
		{
			_putchar(alpha); /* keep printing the letters... */
			alpha++; /* and going to the next letter to be printed*/
		}
		_putchar('\n');
		count++;
	}
}
