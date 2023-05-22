#include <stdio.h>

/**
 * main - The entry point of this program
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
