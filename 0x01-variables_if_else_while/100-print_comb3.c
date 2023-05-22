#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

/* Entry point */
int main(void)
{
	int num1, num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 10)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			if (num1 == 8 && num2 == 9)
				num1++;
			else
			{
				putchar(',');
				putchar(' ');
			}
			num2++; /* num2 = num2 + 1 */
		}
		num1++; /* num1 = num1 + 1 */
	}
	putchar('\n');

	return (0);
}
