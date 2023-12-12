#include "search_algos.h"

/**
 * linear_search - Searches for a target value in an array of integers
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: Target value
 * Return: The index of the first occurence of the target value if found
 * otherwise -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* IF array is null */
	if (!array)
		return (NOT_FOUND);

	/* Searching through the array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (NOT_FOUND);
}
