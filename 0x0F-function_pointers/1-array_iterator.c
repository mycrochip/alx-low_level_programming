#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that maps a function to an array.
 * @array: Pointer to the array.
 * @size: Number elements in the array.
 * @action: Pointer to the function.
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
