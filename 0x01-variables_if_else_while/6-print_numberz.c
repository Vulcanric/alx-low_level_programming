#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 48; /* ASCII code for '0' */
	while (num < 58) /* ASCII code for '9' + 1 */
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}

