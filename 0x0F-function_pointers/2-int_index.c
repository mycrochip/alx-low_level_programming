#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Pointer to an array
 * @size: Number elements in array
 * @cmp: Pointer to comparator function
 * Return: Index of first element on success, otherwise -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
