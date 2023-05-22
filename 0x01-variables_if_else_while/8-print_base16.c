#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	int num;

	char alpha;

	alpha = 'a';
	for (num = 0; num < 10; num++)
		putchar(num + 48);
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha += 1;
	}
	putchar('\n');

	return (0);
}
