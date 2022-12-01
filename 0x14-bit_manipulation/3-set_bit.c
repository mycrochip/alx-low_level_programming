#include "main.h"

/**
 * set_bit - Function that sets the value of a number's bit
 * at a given index to 1.
 * @n: Pointer to the number.
 * @index: The given index.
 * Return: 1 on success, otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return ((index > 8 * sizeof(*n)) ? (-1) : (1));
}
