#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory of a 2D array of integer
 * previously created by alloc_grid
 * @grid: A pointer to array of integers
 * @height: Number of rows
 * Return: Nothing
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
