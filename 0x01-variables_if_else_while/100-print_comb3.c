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
		/* num1 is equal to dec 0(int)
		 * dec 0(int) is = 'NUL' according to ascii
		 * therefore putchar should print the value of num1 + '0'
		 * hence "1 + '0' = 1"
		 */
		/*putchar(num1 + 48);* 48 is the ascii representation of '0' */
		num2 = num1 + 1;
		while (num2 < 10)
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			if (num1 <= 9 && num2 <= 9)
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
