#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size in bytes of memory allocated space
 * @new_size: new size in bytes of memory to be allocated
 * Return: void pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *memory, *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	memory = malloc(new_size);

	new_ptr = ptr;
	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		memory[i] = new_ptr[i];
	free(ptr);

	return (memory);
}
