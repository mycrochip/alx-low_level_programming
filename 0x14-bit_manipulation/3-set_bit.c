#include "main.h"

/**
 * set_bit - Function that sets the bit of a number
 * at a given index to 1
 * @n: Pointer to the number
 * @index: The given index
 * Return: 1 on success, otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
