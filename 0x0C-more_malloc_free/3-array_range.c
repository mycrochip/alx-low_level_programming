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

	range = (max - min) + 1;

	array = malloc(range * sizeof(min));
	if (array == NULL || min > max)
		return (NULL);

	for (i = 0; i < range; i++)
		*(array + i) = min++;

	return (array);
}
