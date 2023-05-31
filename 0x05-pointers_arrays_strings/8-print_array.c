#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1)) /* IF i is not equal to the last index */
		{
			printf(", "); /* print comma and space ", " */
		}
	}
	printf("\n");
}
