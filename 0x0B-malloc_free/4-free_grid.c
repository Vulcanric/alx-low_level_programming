#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Deallocates memory allocated for a 2D array
 * @grid: Pointer to a 2D array
 * @height: size of array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL) /* If grid has memory allocated to it... */
	{
		while (i < height)
		{
			free(grid[i]); /* Free the memory allocated for each pointer */
			i++;
		}
	/* Release the memory allocated for array of pointers */
		free(grid);
	}
}
