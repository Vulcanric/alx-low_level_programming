#include "main.h"
#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 *
 * Return: Sum of the multiples
 */
int main(void)
{
	int sum, i; /* Iterator */

	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0); /* Success....*/
}
