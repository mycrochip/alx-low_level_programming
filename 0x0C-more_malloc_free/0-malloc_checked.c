#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory or exit with 98
 **/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
