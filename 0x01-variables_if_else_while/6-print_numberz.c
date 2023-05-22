#include <stdio.h>

/**
 * main - Entry point of this group
 *
 * Return: 0
 */
int main(void)
{
	int numz;

	numz = 0;
	while (numz < 10)
	{
		putchar(numz + 48);
		numz += 1;
	}
	putchar('\n');

	return (0);
}
