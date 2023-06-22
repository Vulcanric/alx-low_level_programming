#include "function_pointers.h"

/**
 * int_index - Searches for an integer in array's element list
 * @array: Array of integers
 * @size: Number of elements in the array "array"
 * @cmp: Pointer to function that compare the integer values
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0 (index of the integer found).
 * else -1 if no matching element found or size is less than or equal zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0) /* IF cmp results false */
		{
			continue; /* Move to the next integer */
			return (-1);
		}
		else
			break;
	}
	return (i); /* return the index of the element */
}
