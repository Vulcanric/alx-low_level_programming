#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to array of integers
 * @n: Number of elements of the array
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int len_a; /* Length of array */
	int i, tmp; /* Iterator and temporary holder */
	int start, end; /* starting element and ending element */

	len_a = 0;
	while (len_a < n)
	{
		len_a++;
	}

	start = 0; /* first element index */
	end = len_a - 1; /* last element index */

	for (i = 0; i < len_a; i++)
	{
		/* Swapping elements */
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
		i++;
	}

}
