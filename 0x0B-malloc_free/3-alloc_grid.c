#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers
 * @width: size of width
 * @height: Size of height
 * Return: Pointer to 2D array if success, else NULL if failed or
 * width or height size is less than 1
 */
int **alloc_grid(int width, int height)
{
	int **ret_ptr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ret_ptr = malloc(sizeof(int) * height);
	if (ret_ptr == NULL) /* Handling malloc return */
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ret_ptr[i] = malloc(sizeof(int) * width);
		if (ret_ptr[i] == NULL)
		{
			for (; i < height; i++)
				free(ret_ptr[i]);
		}
	}

	/* Initializing each element of the 2D array to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ret_ptr[i][j] = 0;
		}
	}
	return (ret_ptr);
}
