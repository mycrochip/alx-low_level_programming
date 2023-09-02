#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * needed to be flipped in order to get from a number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bit transformations needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* a bit of 'm' needs to be flipped if... */
	/* ...its value is not thesame as that of 'n'... */
	/* ...at the same position */
	unsigned long int diff;
	int i, num;

	/* 'diff' holds the positions where m != n */
	diff = (n ^ m);
	num = 0;

	/* count flips */
	for (i = 8 * sizeof(diff) - 1; i >= 0; i--)
		if ((diff >> i) & 01)
			num++;
	return (num);
}
