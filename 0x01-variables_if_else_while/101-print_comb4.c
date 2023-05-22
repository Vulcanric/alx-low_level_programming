#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n1, n2, n3; /* Declare variables first-num, second-num and third-num */

	n1 = 48; /* Initialize first-num to be 48; is decimal rep. for '0' */
	while (n1 < 58) /* 58 is the decimal rep. for '10' */
	{
		n2 = n1 + 1;

		while (n2 < 58)
		{
			n3 = n2 + 1;

			while (n3 < 58)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
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
