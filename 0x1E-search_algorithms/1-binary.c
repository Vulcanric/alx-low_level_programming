#include "search_algos.h"

void do_some_stuff(int *array, size_t size, int callcount, int *indexarray);

/**
 * copy - Copy data from one array to another
 * @src: The source array (Where to copy from)
 * @des: The destination array (Where to copy to)
 * @start: The index to start copying from
 * @stop: The index to end copying
 * Return: array of integers
 */
int *copy(int *src, int *des, int start, int stop)
{
	int i, j;

	for (i = start, j = 0; i <= stop; i++, j++)
	{
		des[j] = src[i];
	}

	return (des);
}

/**
 * binary_search - Searches for a value in a sorted array using the
 * Binary Search Algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: Target value
 * Return: The index where target value is located if found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l_sub_array[25], r_sub_array[25];
	static int index_array[50], call_count = 0, index;

	if (!array)
		return (NOT_FOUND);

	do_some_stuff(array, size, call_count, index_array);

	if (size == 1)
	{
		if (array[0] == value)
			index = index_array[0];
		else if (array[0] != value)
			index = NOT_FOUND;
	}
	else
	{
		/* split the array */
		copy(array, l_sub_array, 0, (size / 2) - 1);
		copy(array, r_sub_array, (size / 2), size - 1);
		call_count++;
		if (value < r_sub_array[0]) /* IF value is less than right subarray */
		{
			copy(index_array, index_array, 0, (size / 2) - 1);
			binary_search(l_sub_array, L_S, value);
		}
		else
		{
			copy(index_array, index_array, (size / 2), size - 1);
			binary_search(r_sub_array, R_S, value);
		}
	}
	return (index);
}

/**
 * do_some_stuff - Does some stuff that aids the binary search function
 * both directly and indirectly
 * @array: Array to print
 * @size: Size of the array to print
 * @callcount: Number of recursive calls of the caller function
 * @indexarray: Array used to take account of indexes
 * Return: Nothing
 */
void do_some_stuff(int *array, size_t size, int callcount, int *indexarray)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (callcount == 0)
			indexarray[i] = i;
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
		else
			printf("\n");
	}
}
