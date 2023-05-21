#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of this program
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha += 1;
		}
		else
		{
			write(1, &alpha, 1);
			alpha++;
		}
	}
	putchar('\n');

	return (0);
}
