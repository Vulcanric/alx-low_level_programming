#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: Pointer to 2D array
 * @size: size of the 2D array
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0; /* Index */
	int sum1 = 0, sum2 = 0; /* 1st diagonal-sum and 2nd diagonal-sum*/

	/* To get the sum of the first diagonal numbers (left to right)*/
	for (i = 0; i < size && j < size; i++)
	{
		sum1 += a[i * size + j]; /* To access a particular element */
		j++;
	}

	/* To get the sum of the second digonal numbers (right to left)*/
	j = size - 1;
	for (i = 0; i < size && j >= 0; i++)
	{
		sum2 += a[i * size + j]; /* To access a particular element */
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
