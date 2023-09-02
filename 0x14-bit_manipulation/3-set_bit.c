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
	int r_val;

	/* check if index is between bit range */
	r_val = (index > 8 * sizeof(*n)) ? (-1) : (1);
	if (r_val)
		*n = *n | (1 << index);

	return (r_val);
}
