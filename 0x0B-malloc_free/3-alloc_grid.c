#include "main.h"
#include <stdlib.h>

void free_array(int **array, int height);

/**
 * alloc_grid - Creates a 2D array of integers
 * @width: Number of columns
 * @height: Number of rows
 * Return: Pointer to array or null
 **/
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free_array(array, height);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}

/**
 * free_array - Frees the memory of a 2D array of integer
 * previously created by alloc_grid
 * @grid: Pointer to the array of integers
 * @height: Number of rows
 * Return: nothing
 **/
void free_array(int **array, int height)
{
	int i;

	if (array == NULL)
		return;

	i = 0;
	while (i < height)
		free(array[i++]);
	free(array);
}
