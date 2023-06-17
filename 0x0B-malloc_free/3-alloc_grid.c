#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array of integers
 * @width: size of width
 * @height: Size of height
 * Return: Pointer to 2D array if success, else NULL if failed or
 * width or height size is less than 1
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	/* Allocating memory for the array of pointers */
	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Allocating memory for each pointer */
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL) /* IF the allocation fails */
		{
			for (j = 0; j < i; j++)
				free(arr[j]); /* Free the previously allocated pointer*/
			free(arr); /* Free the array */
			return (NULL); /* THEN return null indicating error */
		}

	/* Initializing each elements of the 2D array with 0 */
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
