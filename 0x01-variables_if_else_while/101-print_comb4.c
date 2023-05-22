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

	/** while first-num is 0 and is less than 10,
	  * assign second-num to be equal to first-num added by 1
	  * satisfy the second loop before incrementing first-num
	  */
	while (n1 < 10)
	{
		n2 = n1 + 1;
		
		/** while second-num is plus 1 greater than first-num and is less than 10
		  * assign third-num to be equal to second-num added by 1
		  * satisfy the third loop before incrementing second-num
		  */
		while (n2 < 10)
		{
			n3 = n2 + 1;

			/** while third-num is plus 1 greater than second-num and is less than 10
			  * put the character first-num + 48 to stdout
			  * put the character second-num + 48 to stdout
			  * put the character third-num + 48 to stdout
			  */
			while (n3 < 10)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				putchar(n3 + 48);
				if (n1 == 7 && n2 == 8 && n3 == 9) /* IF first-num, second-num and third-num are = 789 respectively */
					n1++; /* THEN increment first-num */
				else /* ELSE put character comma',' and space' ' after every display of first-num, and third-num */
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
