#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, replacing multiple of 3 with
 * Fizz, multiples of 5 with Buzz and multiples of 3 and 5 with FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0) /* IF number is a multiple of 3 and 5 */
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0) /* ELSE IF the number is a multiple of 3 only */
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0) /* ELSE IF the number is a multiple of 5 only */
		{
			printf("Buzz ");
		}
		else /* IF none of the above conditions are not met */
			printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
