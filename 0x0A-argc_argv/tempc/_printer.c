#include "main.h"

/**
 * _prints - Prints a string to sdout.
 * @ptr: A pointer to the string.
 * Return: Nothing.
 */
void _prints(char *ptr)
{
	/* Output a string */
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}

/**
 * _printn - Prints an integer to sdout.
 * @ptr: A pointer to the integer.
 * Return: Nothing.
 */
void _printn(int *ptr)
{
	int val, place;
	int num, absval;
	int neg;

	neg = 0;
	val = absval = *ptr;
	if (*ptr < 0)
	{
		neg = 1;
		absval = -val;
	}

	/* Find the place value */
	place = 1;
	val = absval;
	while (val >= 10)
	{
		place *= 10;
		val /= 10;
	}

	/* Output each value from the highest */
	if (neg)
		_putchar('-');

	val = absval;
	while (place >= 1)
	{
		num = val / place;
		_putchar(num + '0');

		val -= (num * place);
		place /= 10;
	}
	_putchar('\n');
}
