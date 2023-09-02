#include "main.h"

/**
 * print_binary -  Prints the binary representation of a given number
 * @n: The given number.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	/* !you don't need to create bits, use system bits... */
	/* ...don't convert values to binary explicitly! */
	int i;

	int flag; /* check if 1 has been encountered, otherwise ignore leading zeros */

	if (n == 0)
		_putchar('0');
	/* using bit manipulation */
	for (flag = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((flag == 0) && ((n >> i) & 1))
			flag = 1;
		if (flag == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
