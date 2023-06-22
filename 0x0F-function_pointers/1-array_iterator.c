#include "function_pointers.h"

/**
 * array_iterator - Iterate through all elements of an array and prints them
 * @array: Pointer to the array to iterate
 * @size: Size of the array
 * @action: Pointer to the function to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0; /* Same as size_t */

	if (array == NULL || action == NULL)
		return;

	while (i < size) /* Iterating through all elements */
	{
		action(array[i]); /* Perform function pointed to by action */
		i++;
	}
}
