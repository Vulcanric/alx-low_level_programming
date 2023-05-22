#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n1, n2, n3; /* Declare variables first-num, second-num and third-num */

	n1 = 0; /* Initialize first-num to be zero */
	while (n1 < 10)
	{
		n2 = n1 + 1;

		while (n2 < 10)
		{
			n3 = n2 + 1;

			while (n3 < 10)
			{
				putchar(n1 + 48); /* 48 is ascii decimal value for the character '0' */
				putchar(n2 + 48);
				putchar(n3 + 48);
				if (n1 == 7 && n2 == 8 && n3 == 9)
					n1++; /* THEN increment first-num */
				else
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}
