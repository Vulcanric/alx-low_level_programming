#include "main.h"
#include <stdlib.h>

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
