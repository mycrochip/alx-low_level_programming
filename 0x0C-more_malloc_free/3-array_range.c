#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the lowest integer.
 * @max: the highest integer.
 * Return: a pointer to the array on success, otherwise NULL.
 */
int *array_range(int min, int max)
{
	int i, *array, range;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	array = malloc(range * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		*(array + i) = min++;

	return (array);
}
