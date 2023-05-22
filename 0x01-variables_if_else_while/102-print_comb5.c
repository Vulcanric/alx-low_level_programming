#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = 48; n2 < 58; n2++)
		{
			for (n3 = 48; n3 < 58; n3++)
			{
				for (n4 = 48; n4 < 58; n4++)
				{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
					if (!(n1 == 57 && n2 == 57 && n3 == 57 && n4 == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
